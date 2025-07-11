#include <bits/stdc++.h>

using namespace std; // da pra fazer com fila

int main(){
    int capita, max, aux1, aux2, empresa = 0;
    float auxfl;
    queue<float> divide;
    while (1)
    {
        cin >>capita>>max;
        if (capita == 0 && max == 0)
        {
            break;
        }
        divide.push(capita);
        while (divide.size() != 0)
        {
            if (divide.front() <= max)
            {
                empresa++;
                divide.pop();
            }
            else
            {
                auxfl = divide.front()/2;
                aux1 = divide.front()/2;
                if (auxfl - aux1 != 0)
                {
                    aux2 = aux1;
                    aux1++;
                }
                else
                {
                    aux2 = aux1;
                }
                
                divide.push(aux1);
                divide.push(aux2);
                divide.pop();
            }
        }
        cout <<empresa<<endl;
        empresa = 0;
    }
    
    return 0;
}