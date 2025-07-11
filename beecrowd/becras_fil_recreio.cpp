#include <bits/stdc++.h>

using namespace std;

int main(){
    int caso, alunos, aux, cont = 0;
    vector<int> nota;
    vector<int> nota2;
    cin >>caso;
    for (int i = 0; i < caso; i++)
    {
        cin >>alunos;
        for (int j = 0; j < alunos; j++)
        {
            cin >>aux;
            nota.push_back(aux);
            nota2.push_back(aux);
        }
        sort(nota.begin(), nota.end(), greater<int>());
        
        for (int j = 0; j < alunos; j++)
        {
            if (nota[j] == nota2[j])
            {
                cont++;
            }
        }
        cout <<cont<<endl;
        cont = 0;
        nota.clear();
        nota2.clear();
    }

    return 0;
}