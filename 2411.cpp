#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<vector<int>> buracos = {{1, 3}, {2, 3}, {2, 5}, {5, 4}};
    vector<int> inicial = {4, 3};
    unordered_map<int, vector<int>> movimentacoes;
    movimentacoes[1] = {1, 2};
    movimentacoes[2] = {2, 1};
    movimentacoes[3] = {2, -1};
    movimentacoes[4] = {1, -2};
    movimentacoes[5] = {-1, -2};
    movimentacoes[6] = {-2, -1};
    movimentacoes[7] = {-2, 1};
    movimentacoes[8] = {-1, 2};

    int n;
    int m;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;
        inicial[0] += movimentacoes[m][0];
        inicial[1] += movimentacoes[m][1];

        for (vector<int> b : buracos)
        {
            if (b == inicial)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }

    cout << n << endl;
    return 0;
}
