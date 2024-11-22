#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> valores(n);

    int contador = 1;
    int maior_contador = 1;
    cin >> valores[0];

    for(int i = 1; i < n; i++) {
        cin >> valores[i];

        if (valores[i -1] != valores[i]) {
            contador = 1;
        } else {
            contador ++;
            if(contador > maior_contador) {
                maior_contador = contador;
            }
        }
    }

    cout << maior_contador << endl;

    return 0;
}
