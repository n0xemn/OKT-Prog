#include <bits/stdc++.h>

using namespace std;

typedef struct dados 
{
    float cesta_ava; // pontos marcados dividido pelos pontos sofridos, se sofrer 0 pontos o cesta avarage eh igual ao pontos marcados
    int pontos;
    int cestas;
    int cestas_recebidos;
    int inscricao;
}dados;

bool ordena(dados x, dados y){
    if (x.pontos > y.pontos)
    {
        return true;
    }
    if (x.pontos < y.pontos)
    {
        return false;
    }
    if (x.cesta_ava > y.cesta_ava)
    {
        return true;
    }
    if (x.cesta_ava < y.cesta_ava)
    {
        return false;
    }
    if (x.cestas > y.cestas)
    {
        return true;
    }
    if (x.cestas < y.cestas)
    {
        return false;
    }
    if (x.inscricao < y.inscricao)
    {
        return true;
    }
    if (x.inscricao > y.inscricao)
    {
        return false;
    }
}

int main(){
    vector<dados> times;
    int n, x, y, z, w, inst = 1;
    cin >>n;
    while (n != 0)
    {
        for (int i = 0; i < n; i++)
        {
            dados aux;
            aux.inscricao = i+1;
            aux.cesta_ava = 0;
            aux.pontos = 0;
            aux.cestas = 0;
            aux.cestas_recebidos = 0;
            times.push_back(aux);
        }
        for (int i = 0; i < (n*(n-1)/2); i++)
        {
            cin >>x>>y>>z>>w;
            if (y > w)
            {
                times[x-1].pontos += 2;
                times[z-1].pontos += 1;
            }
            else
            {
                times[x-1].pontos += 1;
                times[z-1].pontos += 2;
            }
            times[x-1].cestas += y;
            times[z-1].cestas += w;
            times[z-1].cestas_recebidos += y;
            times[x-1].cestas_recebidos += w;
        }
        for (int i = 0; i < n; i++)
        {
            if (times[i].cestas_recebidos == 0)
            {
                times[i].cesta_ava = times[i].cestas;
            }
            else
            {
                times[i].cesta_ava = (float) times[i].cestas/times[i].cestas_recebidos;
            }
        }
        sort(times.begin(), times.end(), ordena);

        cout <<"Instancia "<<inst<<endl;
        cout <<times[0].inscricao;
        for (int i = 1; i < n; i++)
        {
            cout <<" "<<times[i].inscricao;
        }
        cout <<endl;
        inst++;
        cin >>n;
        if (n != 0)
        {
            cout <<endl;
        }
        
        times.clear();
    }
    
    return 0;
}