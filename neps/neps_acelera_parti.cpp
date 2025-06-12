#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >>N;
    if (N % 8 == 6)
    {
        cout <<"1"<<endl;
    }
    else if (N % 8 == 7)
    {
        cout <<"2"<<endl;
    }
    else
    {
        cout <<"3"<<endl;
    }
    
    return 0;
}