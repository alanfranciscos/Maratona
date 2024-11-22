#include <bits/stdc++.h>

using namespace std;

string dance_string(string request)
{
    string ans;
    int isUpper = 1;
    char space = ' ';

    for (int i = 0; i < request.size(); i++)
    {
        if (request[i] != space)
        {
            if (isUpper == 1)
            {
                request[i] = toupper(request[i]);
                ans = ans + request[i];
                isUpper = -1;
            }
            else
            {
                ans = ans + request[i];
                isUpper = 1;
            }
        } else {
            ans = ans + " ";
        }
    }

    return ans;
}

int main()
{
    string s;
    string ans;
    getline(cin, s);

    while(!s.empty()) {
        ans += dance_string(s);
        s.clear();

        getline(cin, s);
    }

    cout << ans << endl;

    return 0;
}
