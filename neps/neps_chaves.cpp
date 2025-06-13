#include <bits/stdc++.h>

using namespace std;

int main(){
    int aux, cont = 0;
    string palavra;
    queue<char> chaves; 
    while (cin >>palavra)
    {
        for (int i = 0; i < (int) palavra.length(); i++)
        {
            if (palavra[i] == '{' || palavra[i] == '}')
            {
                chaves.push(palavra[i]);
            }
        }
    }

    if (chaves.size() == 0)
    {
        cout <<"S"<<endl;
        return 0;
    }

    if (chaves.front() == '}')
    {
        cout <<"N"<<endl;
        return 0;
    }
    
    aux = chaves.size();
    for (int i = 0; i < aux; i++)
    {
        //cout <<chaves.front()<<endl;
        if (chaves.front() == '{')
        {
            cont++;
            chaves.pop();
            continue;
        }
        else
        {
            cont--;
            chaves.pop();
            if (cont < 0)
            {
                cout <<"N"<<endl;
                return 0;
            }
            
            continue;
        }
    }
    if (cont == 0)
    {
        cout <<"S"<<endl;
    }
    else
    {
        cout <<"N"<<endl;
    }

    return 0;
}