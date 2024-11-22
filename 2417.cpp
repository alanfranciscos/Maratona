#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> c(3);
    vector<int> f(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
    }

    for (int i = 0; i < 3; i++)
    {
        cin >> f[i];
    }

    int pontos_c = c[0] * 3 + c[1];
    int pontos_f = f[0] * 3 + f[1];

    if (pontos_c > pontos_f)
    {
        cout << "C" << endl;
        return 0;
    }
    else if (pontos_c < pontos_f)
    {
        cout << "F" << endl;
        return 0;
    }

    if (c[2] > f[2])
    {
        cout << "C" << endl;
        return 0;
    }
    else if (c[2] < f[2])
    {
        cout << "F" << endl;
        return 0;
    }

    cout << "=" << endl;
    return 0;
}
