#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> valores(n);
    int soma = 0;
    int search = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> valores[i];
        soma += valores[i];
    }

    search = soma / 2;
    int soma_atual = 0;

    for (int i = 0; i < n; i++)
    {
        soma_atual += valores[i];
        if (soma_atual >= search)
        {
            cout << (i + 1) << endl;
            return 0;
        }
    }

    cout << n << endl;

    return 0;
}
