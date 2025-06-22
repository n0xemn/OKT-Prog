#include <bits/stdc++.h>

using namespace std;

int main(){
    int vet[20], aux;
    for (int i = 0; i < 20; i++)
    {
        cin >>vet[i];
    }
    for (int i = 0, ulti = 19; i < 10; i++, ulti--)
    {
        aux = vet[i];
        vet[i] = vet[ulti];
        vet[ulti] = aux;
    }
    for (int i = 0; i < 20; i++)
    {
        cout <<"N["<<i<<"] = "<<vet[i]<<endl;
    }

    return 0;
}