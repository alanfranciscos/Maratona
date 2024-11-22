#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matriz(n, vector<int>(m));

    int left_number = -1;
    int last_it = -2;
    bool contain_n = false;

    for (int i = 0; i < n; i++)
    {
        contain_n = false;
        for (int j = 0; j < m; j++)
        {
            cin >> matriz[i][j];
            if (matriz[i][j] > 0)
            {
                contain_n = true;
            }
            else if (matriz[i][j] == 0 && !contain_n)
            {
                left_number = j;
            }
        }
        if (left_number <= last_it && left_number != m - 1)
        {
            cout << "N" << endl;
            return 0;
        }

        last_it = left_number;
    }

    cout << "S" << endl;
    return 0;
}
