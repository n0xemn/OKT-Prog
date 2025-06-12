#include <bits/stdc++.h>

using namespace std;

int main(){
    int P, D1, D2;
    cin >>P>>D1>>D2;

    if (P == 0)
    {
        if ((D1 + D2) % 2 == 0)
        {
            cout <<"0"<<endl;    
        }
        else
        {
            cout <<"1"<<endl;
        }
    }
    else
    {
        if ((D1 + D2) % 2 == 0)
        {
            cout <<"1"<<endl;    
        }
        else
        {
            cout <<"0"<<endl;
        }
    }

    return 0;
}