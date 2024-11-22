#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans, atual;
    cin >> n;
    atual = n;
    ans = 1;

    while (atual >= 2)
    {
        atual /= 2;
        ans *= 4;
    }

    cout << ans << endl;

    return 0;
}
