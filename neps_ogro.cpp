#include <bits/stdc++.h>

using namespace std;

int main(){
    int E, D;
    cin >>E;
    cin >>D;
    if(E < 0 || E > 5 || D < 0 || D > 5 || E == D){
        return 0;
    }
    if (E > D)
    {
        int aux = E + D;
        cout <<aux<<endl;
    }
    else
    {
        int aux = 2 * (D - E);
        cout <<aux<<endl;
    }
    
    return 0;
}