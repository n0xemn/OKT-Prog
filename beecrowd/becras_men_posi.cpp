#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, min = RAND_MAX, posi;
    cin >>N;
    int vet[N];
    for (int i = 0; i < N; i++)
    {
        cin >>vet[i];
        if (vet[i] < min)
        {
            min = vet[i];
            posi = i;
        }
    }
    cout <<"Menor valor: "<<min<<endl;
    cout <<"Posicao: "<<posi<<endl;

    return 0;
}