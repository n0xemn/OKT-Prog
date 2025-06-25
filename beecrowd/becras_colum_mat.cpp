#include <bits/stdc++.h>

using namespace std;

int main(){
    int colum, quant = 0;
    float soma = 0, valor;
    char opera;
    cin >>colum>>opera;
    if (opera == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                cin >>valor;
                if (j == colum)
                {
                    soma += valor;
                }
            }
        }
        cout <<fixed<<setprecision(1)<<soma<<endl;
    }
    else
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                cin >>valor;
                if (j == colum)
                {
                    soma += valor;
                    quant++;
                }
            }
        }
        cout <<fixed<<setprecision(1)<<soma/quant<<endl;
    }

    return 0;
}