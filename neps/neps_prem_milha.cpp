#include <bits/stdc++.h>

using namespace std;

int main(){
    int dias, visi, soma = 0;
    cin >>dias;
    for (int i = 1; i <= dias; i++)
    {
        cin >>visi;
        soma += visi;
        if (soma >= 1000000)
        {
            cout <<i<<endl;
            break;
        }
    }

    return 0;
}