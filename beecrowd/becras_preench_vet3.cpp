#include <bits/stdc++.h>

using namespace std;

int main(){
    double X, vet[100];
    cin >>X;
    vet[0] = X;
    cout <<"N[0] = "<<fixed<<setprecision(4)<<vet[0]<<endl;
    for (int i = 1; i < 100; i++)
    {
        vet[i] = vet[i - 1]/2;
        cout <<"N["<<i<<"] = "<<fixed<<setprecision(4)<<vet[i]<<endl;
    }

    return 0;
}