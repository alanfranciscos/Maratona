#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> matriz(n, vector<char>(m));
    string entrada;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> entrada;
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = entrada[j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matriz[i][j] == '#')
            {
                if (i == 0 || j == 0 || i == n - 1 || j == m - 1 ||
                    matriz[i - 1][j] == '.' || matriz[i + 1][j] == '.' ||
                    matriz[i][j - 1] == '.' || matriz[i][j + 1] == '.')
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
