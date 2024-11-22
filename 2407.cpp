#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> quadrado(n, vector<int>(n));
    unordered_map<int, int> contador;
    int magico = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> quadrado[i][j];

            if (i == j)
            {
                magico += quadrado[i][j];
            }

            if (contador[quadrado[i][j]] > 0)
            {
                cout << "0" << endl;
                return 0;
            }
            else
            {
                contador[quadrado[i][j]]++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        int somal = 0, somac = 0;

        for (int j = 0; j < n; j++)
        {
            somal += quadrado[i][j];
            somac += quadrado[j][i];
        }

        if (somal != magico || somac != magico)
        {
            cout << "0" << endl;
            return 0;
        }
    }

    cout << magico << endl;

    return 0;
}
