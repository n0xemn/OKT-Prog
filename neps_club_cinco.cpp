#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, aux, total = 0;
    cin >>N;
    for (int i = 0; i < 3; i++)
    {
        cin >>aux;
        total += aux;
    }
    for (int i = 0; i < 3; i++)
    {
        cin >>aux;
        total -= aux;
    }
    cin >>aux;
    total += aux;
    if ((N - total) == 0)
    {
        cout <<"N"<<endl;
    }
    else
    {
        cout <<"S"<<endl;
    }

    return 0;
}