#include <iostream> //i/o
#include <vector>   //vector
#include <stdlib.h> //abs

using namespace std;

int main()
{
    int n, altura;
    cin >> n >> altura;

    vector<int> vetor;

    for (int i = 0; i < n; i++)
    {
        int elemento;
        cin >> elemento;
        vetor.push_back(elemento);
    }

    int movimentos = 0;

    // Nao preciso atribuir ao elemento atual, pois ja sei que ele
    // vai ter o valor da atura desejada
    for (int i = 0; i < n - 1; i++)
    {
        if (vetor[i] > altura)
        {
            movimentos += abs(vetor[i] - altura);
            vetor[i + 1] -= abs(vetor[i] - altura);
        }
        else if (vetor[i] < altura)
        {
            movimentos += abs(altura - vetor[i]);
            vetor[i + 1] += abs(altura - vetor[i]);
        }
    }

    movimentos += abs(altura - vetor[n - 1]);

    cout << movimentos << endl;

    return 0;
}
