#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, inter, A = 0, B;
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cin >>inter;
        if (inter == 1)
        {
            A++;
        }else
        {
            A++;
            B++;
        }
    }
    if (A % 2 == 0)
    {
        cout <<"0"<<endl;
    }
    else
    {
        cout <<"1"<<endl;
    }
    if (B % 2 == 0)
    {
        cout <<"0"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }

    return 0;
}