#include <bits/stdc++.h>

using namespace std;

int main(){
    string P, A;
    cin >>P>>A;
    int aster = 0; //o tamanho final do vector da primeira palavra devera ser igual ao numero de asteristico e a pilha da segunda palavra devera estar vazia.
    //cin >>A;
    //cout <<P<<A<<endl;
    vector<char> palavra1;
    stack<char> palavra2;
    for (int i = 0; i < P.size(); i++)
    {
        palavra1.push_back(P[i]);
        palavra2.push(A[i]);
        //cout <<palavra1[i];
    }
    for (int i = 0; i < P.size(); i++)
    {
        if (palavra2.top() == '*')
        {
            aster++;
            palavra2.pop();
            continue;
        }
        else
        {
            for (int j = 0; j < palavra1.size(); j++)
            {
                if (palavra2.top() == palavra1[j])
                {
                    palavra2.pop();
                    palavra1.erase(palavra1.begin() + j);
                    break;
                }
            }
        }
    }
    /*
    if (palavra2.size() != 0) // talvez de pra apagar isso
    {
        cout <<"N"<<endl;
        return 0;
    }
    */
    if (aster == palavra1.size())
    {
        cout <<"S"<<endl;
        return 0;
    }
    cout <<"N"<<endl;
    //cout <<endl<<palavra2.top();

    return 0;
}