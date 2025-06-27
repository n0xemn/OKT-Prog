#include <bits/stdc++.h>

using namespace std;

int main(){
    int mat[3][3], result = 0, compara= 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >>mat[i][j];
            if (i == 0)
            {
                result += mat[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            compara += mat[i][j];
        }
        if (compara != result)
        {
            cout <<"NAO"<<endl;
            return 0;
        }
        compara = 0;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            compara += mat[j][i];
        }
        if (compara != result)
        {
            cout <<"NAO"<<endl;
            return 0;
        }
        compara = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                compara += mat[i][j];
            }
        }
    }
    if (compara != result)
    {
        cout <<"NAO"<<endl;
        return 0;
    }
    compara = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i + j == 2)
            {
                compara += mat[i][j];
            }
        }
    }
    if (compara != result)
    {
        cout <<"NAO"<<endl;
        return 0;
    }
    cout <<"SIM"<<endl;

    return 0;
}