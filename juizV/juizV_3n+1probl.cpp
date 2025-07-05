#include <bits/stdc++.h>

using namespace std;

int tamanho_max(int I, int J);

int main(){
    int I, J;
    while (cin >>I>>J)
    {
        cout <<I<<" "<<J<<" "<<tamanho_max(I, J)<<endl;
    }

    return 0;
}

int tamanho_max(int I, int J){
    int qtde = 1, max = -1;
    if (I < J)
    {
        for (int i = I; i <= J; i++)
        {
            int aux = i;
            while (aux != 1)
            {
                if (aux%2 == 1)
                {
                    qtde++;
                    aux = 3*aux + 1;
                    continue;
                }
                else
                {
                    aux = aux/2;
                    qtde++;
                    continue;
                }
            }
            if (qtde > max)
            {
                max = qtde;
            }
            qtde = 1;
        }
        return max;
    }
    else
    {
        for (int i = J; i <= I; i++)
        {
            int aux = i;
            while (aux != 1)
            {
                if (aux%2 == 1)
                {
                    qtde++;
                    aux = 3*aux + 1;
                    continue;
                }
                else
                {
                    aux = aux/2;
                    qtde++;
                    continue;
                }
            }
            if (qtde > max)
            {
                max = qtde;
            }
            qtde = 1;
        }
        return max;
    }
}