#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, C;
    cin >>A>>B>>C;
    if (A+B+C == 3 || A+B+C == 0)
    {
        cout <<"*"<<endl;
    }
    else if (A == B)
    {
        cout <<"C"<<endl;
    }
    else if (A == C)
    {
        cout <<"B"<<endl;
    }
    else
    {
        cout <<"A"<<endl;
    }

    return 0;
}