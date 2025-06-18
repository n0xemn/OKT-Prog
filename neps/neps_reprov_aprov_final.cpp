#include <bits/stdc++.h>

using namespace std;

int main(){
    int N1, N2;
    cin >>N1>>N2;
    if ((N1 * 2 + N2 * 3) / 5 >= 7)
    {
        cout <<"Aprovado"<<endl;
    }
    else if ((N1 * 2 + N2 * 3) / 5 < 3)
    {
        cout <<"Reprovado"<<endl;
    }
    else
    {
        cout <<"Final"<<endl;
    }
    
    return 0;
}