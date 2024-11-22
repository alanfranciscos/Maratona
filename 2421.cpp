#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    int l1, h1, l2, h2;

    cin >> x >> y >> l1 >> h1 >> l2 >> h2;

    // Verifica se cabe os dois retângulos lado a lado ou um em cima do outro.
    if (
        // lado a lado
        //  normal
        (l1 + l2) <= x && max(h1, h2) <= y ||
        // 1 virado e outro original
        (h1 + l2) <= x && max(l1, h2) <= y ||
        // original e outro vireado
        (l1 + h2) <= x && max(h1, l2) <= y ||
        // virado e virado
        (h1 + h2) <= x && max(l1, l2) <= y ||

        // cima um do outro
        //  normal
        max(l1, l2) <= x && (h1 + h2) <= y ||
        max(h1, l2) <= x && (l1 + h2) <= y ||
        max(l1, h2) <= x && (h1 + l2) <= y ||
        max(h1, h2) <= x && (l1 + l2) <= y)

    {
        cout << "S" << endl;
    }
    else
    {
        cout << "N" << endl;
    }
    return 0;
}
