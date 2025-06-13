#include <bits/stdc++.h>

using namespace std;

int main(){
    int nov = 0, velh = 0;
    string teste;
    cin >> teste;
    if (teste.size() < 7 || teste.size() > 8)
    {
        cout <<"0"<<endl;
        return 0;
    }
    if (teste.size() == 8)
    {
        // velho
        for (int i = 0; i < teste.size(); i++)
        {
            if (i < 3)
            {
                if (teste[i] < 'A' || teste[i] > 'Z')
                {
                    cout <<"0"<<endl;
                    return 0;
                }            
                continue;
            }
            if (i == 3)
            {
                if (teste[i] != '-')
                {
                    cout <<"0"<<endl;
                    return 0;
                }
                continue;
            }
            if ((i < 8 && i > 3))
            {
                if (teste[i] < '0' || teste[i] > '9')
                {
                    cout <<"0"<<endl;
                    return 0;
                }
                continue;
            }
        }
        cout <<"1"<<endl;
        return 0;
    }
    if (teste.size() == 7)
    {
        // novo
        for (int i = 0; i < teste.size(); i++)
        {
            if (i < 3 || i == 4)
            {
                if (teste[i] < 'A' || teste[i] > 'Z')
                {
                    cout <<"0"<<endl;
                    return 0;
                }            
                continue;
            }
            if (i == 3 || (i < '7' && i > '4'))
            {
                if (teste[i] < '0' || teste[i] > '9')
                {
                    cout <<"0"<<endl;
                    return 0;
                }
                continue;
            }
        }
        cout <<"2"<<endl;
    }
    
    return 0;
}