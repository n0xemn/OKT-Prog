#include <bits/stdc++.h>

using namespace std;

int main(){
    int aux, j = 0, k = 0;
    queue<int> impar;
    queue<int> par;
    for (int i = 0; i < 15; i++)
    {
        cin >>aux;
        if (aux % 2 == 0)
        {
            par.push(aux);
            if (par.size() == 5)
            {
                while (par.size() > 0)
                {
                    cout <<"par["<<j<<"] = "<<par.front()<<endl;
                    j++;
                    par.pop();
                }
                j = 0;
            }
            
        }
        else
        {
            impar.push(aux);
            if (impar.size() == 5)
            {
                while (impar.size() > 0)
                {
                    cout <<"impar["<<k<<"] = "<<impar.front()<<endl;
                    k++;
                    impar.pop();
                }
                k = 0;
            }
        }
    }
    while (impar.size() > 0)
    {
        cout <<"impar["<<k<<"] = "<<impar.front()<<endl;
        k++;
        impar.pop();
    }
    while (par.size() > 0)
    {
        cout <<"par["<<j<<"] = "<<par.front()<<endl;
        j++;
        par.pop();
    }
    
    return 0;
}