#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, x1, x2, y1, y2, area = 0;
    cin >>N;
    int mat[100][100] = {0};
    for (int i = 0; i < N; i++)
    {
        cin >>x1>>x2>>y1>>y2;
        for (int i = y1; i < y2; i++)
        {
            for (int j = x1; j < x2; j++)
            {
                mat[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (mat[i][j] == 1)
            {
                area++;
            }
        }
    }
    cout <<area<<endl;


    return 0;
}