#include <bits/stdc++.h>

using namespace std;

typedef struct ovelha
{
    string nome;
    int idade;
    int peso;
    float altura;
}ovelha;

bool ordena(ovelha x, ovelha y){
    if (x.peso != y.peso)
    {
        return x.peso > y.peso;
    }
    if (x.idade != y.idade)
    {
        return x.idade < y.idade;
    }
    if (x.altura != y.altura)
    {
        return x.altura < y.altura; // se der errado muda pra >
    }
    if (x.nome != y.nome)
    {
        char aux, aux2;
        int auxx = min(x.nome.size(), y.nome.size());
        for (int i = 0; i < auxx; i++)
        {
            aux = x.nome[i];
            aux2 = y.nome[i];
            if (aux != aux2)
            {
                return aux < aux2;
            }
        }
        if (x.nome.size() != y.nome.size())
        {
            return x.nome.size() < y.nome.size();
        }
    }
}

int main(){
    int casos, N, M, idad, pes, inst = 1;
    float alt;
    string name;
    vector<ovelha> ovs;
    cin >>casos;
    for (int i = 0; i < casos; i++)
    {
        cin >>N>>M;
        for (int i = 0; i < N; i++)
        {
            ovelha aux;
            ovs.push_back(aux);
            cin >>ovs[i].nome;
            cin >>ovs[i].peso;
            cin >>ovs[i].idade;
            cin >>ovs[i].altura;
        }
        sort(ovs.begin(), ovs.end(), ordena);
        cout <<"CENARIO {"<<inst<<"}"<<endl;
        inst++;
        for (int j = 0; j < M; j++)
        {
            cout <<j+1<<" - "<<ovs[j].nome<<endl;
        }
        ovs.clear();
    }

    return 0;
}