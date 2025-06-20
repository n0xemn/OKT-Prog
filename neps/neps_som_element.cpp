#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, soma = 0;   
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cin >>x;
        soma += x;
    }
    cout <<soma<<endl;

    return 0;
}