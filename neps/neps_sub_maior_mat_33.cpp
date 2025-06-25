#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3], inp, max = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >>inp;
            if (inp > max)
            {
                max = inp;
            }
            mat[i][j] = inp;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (mat[i][j] == max)
            {
                mat[i][j] = -1;
            }
            cout <<mat[i][j]<<" ";
        }
        cout <<endl;
    }

    return 0;
}