#include <bits/stdc++.h>

using namespace std;

int main(){
    int val, quad1 = 1, quad2 = 1;
    for (int i = 0; i < 2; i++)
    {
        cin >>val;
        quad1 *= val;
    }
    for (int i = 0; i < 2; i++)
    {
        cin >>val;
        quad2 *= val;
    }
    if (quad1 > quad2)
    {
        cout <<quad1<<endl;
    }
    else
    {
        cout <<quad2<<endl;
    }
    
    return 0;
}