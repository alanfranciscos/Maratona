// essa biblioteca bits/* tem mais bibliotecas inclusas dentro delas
// seria como um compilado de bibliotecas
// ex.: vector
// normalmente essa é uma forma padrao de uso em contexts.
#include <bits/stdc++.h>>

using namespace std;

bool checkVowel(char c)
{
    string vowels = "aeiou";

    for (int i = 0; i < vowels.size(); i++)
    {
        if (c == vowels[i])
        {
            return true;
        }
    }

    return false;
}

int main()
{
    // contr -> contrario
    string s, resp, contr;

    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (checkVowel(s[i]))
            resp += s[i];
    }

    for (int i = 0; i < s.size(); i++)
    {
        contr += resp[i];
    }

    if (resp == contr)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}