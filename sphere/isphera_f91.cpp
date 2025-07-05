#include <bits/stdc++.h>

using namespace std;

int F91(int N){
    if (N <= 100)
    {
        N = F91(F91(N + 11));
    }
    else
    {
        return N - 10;
    }
    return N;
}

int main(){
    int N;
    cin >>N;
    while (N != 0)
    {
        cout <<"f91("<<N<<") = "<<F91(N)<<endl;
        cin >>N;
    }

    return 0;
}