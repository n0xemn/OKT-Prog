#include <bits/stdc++.h>

using namespace std;

int gar_cheia(int* garrafa){
    int aux = 0;
    for (int i = 0; i < *garrafa/3; i++)
    {
        *garrafa -= 3;
        aux++;
    }
    *garrafa += aux;
    return aux;
}

int main(){
    int garrafa, drink = 0;
    while (1)
    {
        cin >>garrafa;
        if (garrafa == 0)
        {
            break;
        }
        while (garrafa >= 3)
        {
            drink += gar_cheia(&garrafa);
        }
        if (garrafa == 2)
        {
            drink++;
        }
        
        cout <<drink<<endl;
        drink = 0;
    }
    
    
    return 0;
}