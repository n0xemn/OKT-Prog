#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, somal = 0, somac = 0, maxl = -1, maxc = -1;
    cin >>N;
    int mat[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >>mat[i][j];
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            somal += mat[i][j];
            somac += mat[j][i];
        }
        if (somal > maxl)
        {
            maxl = somal;
        }
        soma = 0;

    }
    
    cout <<soma/N*N<<endl;


    return 0;
}