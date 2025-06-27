#include <bits/stdc++.h>

using namespace std;

int main(){
    char opera;
    float num, soma = 0, media = 0;
    cin >>opera;
    if (opera == 'S')
    {
        for (int i = 0; i < 12; i++)
        {
            for (int j = 0; j < 12; j++)
            {
                cin >>num;
                if (i >= 6)
                {
                    if (i + j > i*2)
                    {
                        soma += num;    
                    }
                }
                else
                {
                    if (j + i >= 12)
                    {
                        soma += num;
                    }
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
                cin >>num;
                if (i >= 6)
                {
                    if (i + j > i*2)
                    {
                        soma += num;    
                    }
                }
                else
                {
                    if (j + i >= 12)
                    {
                        soma += num;
                    }
                }
            }
        }
        cout <<fixed<<setprecision(1)<<soma/media<<endl;
    }
    
    return 0;
}