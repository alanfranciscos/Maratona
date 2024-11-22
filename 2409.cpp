#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    int h, l;

    cin >> a >> b >> c;
    cin >> h >> l;

    if (h - a > 0 && l - b > 0 || l - a > 0 && h - b > 0 ||
        h - a > 0 && l - c > 0 || l - a > 0 && h - c > 0 ||
        h - c > 0 && l - b > 0 || l - c > 0 && h - b > 0)
    {
        cout << "S" << endl;
        return 0;
    }
    cout << "N" << endl;
    return 0;
}
