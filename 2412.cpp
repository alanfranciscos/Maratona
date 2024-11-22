#include <bits/stdc++.h>

using namespace std;

void dfs(int node, vector<unordered_set<int>> &tree, vector<bool> &visited)
{
    visited[node] = true;
    for (int neighbor : tree[node])
    {
        if (!visited[neighbor])
        {
            dfs(neighbor, tree, visited);
        }
    }
}

int main()
{
    int n, d; // arv | dist max cipos
    cin >> n >> d;

    vector<pair<int, int>> coordinates(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coordinates[i].first >> coordinates[i].second;
    }

    vector<unordered_set<int>> tree(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (hypot(
                    coordinates[i].first - coordinates[j].first,
                    coordinates[i].second - coordinates[j].second) <= d)
            {
                tree[i].insert(j);
                tree[j].insert(i);
            }
        }
    }

    vector<bool> visited(n, false);
    dfs(0, tree, visited);

    // Procura do começo ao fim do vetor se existe algum false
    // Caso nao exista false, ele retorna a ultima posicao do vetor (visited.end())
    if (find(visited.begin(), visited.end(), false) == visited.end())
    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }

    return 0;
}
