#include <bits/stdc++.h>

using namespace std;

int main(){
    float A, B;
    cin >>A>>B;
    if ((A+B)/2 >= 7)
    {
        cout <<"Aprovado"<<endl;
    }
    else if ((A+B)/2 < 7 && (A+B)/2 >= 4)
    {
        cout <<"Recuperacao"<<endl;
    }
    else
    {
        cout <<"Reprovado"<<endl;
    }
    


    return 0;
}