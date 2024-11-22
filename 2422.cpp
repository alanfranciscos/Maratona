#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n;

    vector<int> valores(n);
    for (int i = 0; i < n; i++)
    {
        cin >> valores[i];
    }

    cin >> k;

    unordered_set<int> visited;
    int complement;

    for (int i = 0; i < n; i++)
    {
        complement = k - valores[i]; // funcao de 1 grau

        if (visited.find(complement) != visited.end())
        {
            cout << complement << " " << valores[i] << endl;
        }

        visited.insert(valores[i]);
    }

    return 0;
}