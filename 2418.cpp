#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double> valores(5);
    double ans = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> valores[i];
    }

    sort(valores.begin(), valores.end());

    for (int i = 1; i < (5 - 1); i++)
    {
        ans += valores[i];
    }

    cout << fixed << setprecision(1) << ans << endl;

    return 0;
}
