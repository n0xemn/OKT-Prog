#include <bits/stdc++.h>

using namespace std;

int main(){
    int T, aux = 0, vet[1000];
    cin >>T;
    for (int i = 0; i < 1000; i++)
    {
        vet[i] = aux;
        cout <<"N["<<i<<"] = "<<vet[i]<<endl;
        aux++;
        if (aux == T)
        {
            aux = 0;
        }
    }

    return 0;
}