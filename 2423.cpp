#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int FARINHA = 2;
    const int OVOS = 3;
    const int LEITE = 5;

    int a, b, c;
    cin >> a >> b >> c;

    vector<double> response(3);

    response[0] = a / FARINHA;
    response[1] = b / OVOS;
    response[2] = c / LEITE;

    sort(response.begin(), response.end());

    cout << int(response[0]) << endl;

}
