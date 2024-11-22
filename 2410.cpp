#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int atual;
    cin >> n;
    unordered_set<int> values;

    for (int i = 0; i < n; i++)
    {
        cin >> atual;
        values.insert(atual);
    }

    cout << values.size() << endl;
}