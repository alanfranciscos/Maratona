#include <bits/stdc++.h>

using namespace std;

int getMenorIndex(vector<int> &tempo){
    int menorIndex = 0;
    for(int i = 1; i < tempo.size(); i ++) {
        if(tempo[i] < tempo[menorIndex]) {
            menorIndex = i;
        }
    }

    return menorIndex;
}

int main() {
    int c, n;
    cin >> c >> n;

    vector<vector<int>> cliente(n,vector<int>(2));
    vector<int> tempo(c, 0);
    int contador = 0;

    for(int i = 0; i < n; i ++) {
        cin >> cliente[i][0] >> cliente[i][1];

        int menorIndex = getMenorIndex(tempo);

        if (tempo[menorIndex] - cliente[i][0] > 20) {
            contador++;
        }

        if (tempo[menorIndex] <= cliente[i][0]) {
            tempo[menorIndex] = cliente[i][0];
        }

        tempo[menorIndex] += cliente[i][1];
    }

    cout << contador << endl;

    return 0;
}
