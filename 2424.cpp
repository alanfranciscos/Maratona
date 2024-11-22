#include <iostream>

using namespace std;

int main()
{
    int x, y;
    x = 432;
    y = 468;

    int input_x, input_y;
    cin >> input_x >> input_y;

    bool dentro_x = input_x >= 0 && input_x <= x;
    bool dentro_y = input_y >= 0 && input_y <= y;

    if (dentro_x && dentro_y)
    {
        cout << "dentro" << endl;
        return 0;
    }

    cout << "fora" << endl;

    return 0;
}