#include <bits/stdc++.h>

using namespace std;

/*
int fatori(int N){
    if (N == 1)
    {
        return 1;
    }
    
    return N * fatori(N-1);
}
*/

int main(){
    int N, fato = 1;
    cin >>N;
    for (int i = N; i > 1; i--)
    {
        fato *= i;
    }
    
    cout <<fato<<endl;

    return 0;
}