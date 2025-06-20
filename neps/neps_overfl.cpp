#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, P, Q;
    char sim;
    cin >>N;
    cin >>P>>sim;
    switch (sim)
    {
    case '+':
        cin >>Q;
        if (P + Q > N)
        {
            cout <<"OVERFLOW"<<endl;
        }
        else
        {
            cout <<"OK"<<endl;
        }
        break;

    case '*':
        cin >>Q;
        if (P * Q > N)
        {
            cout <<"OVERFLOW"<<endl;
        }
        else
        {
            cout <<"OK"<<endl;
        }
        break;
    
    default:
        break;
    }

    return 0;
}