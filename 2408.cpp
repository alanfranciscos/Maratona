#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> valores(3);

    for (int i = 0; i < 3; i++)
    {
        cin >> valores[i];
    }

    sort(valores.begin(), valores.end());

    cout << valores[1] << endl;

    return 0;
}