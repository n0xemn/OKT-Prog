#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, aux, aux2;
    cin >>aux;
    cin >>N;

    if (N == aux)
    {
        cin >>N;
        cout <<N<<endl;
    }
    else
    {
        cin >> aux2;
        if (aux2 == N)
        {
            cout <<aux<<endl;
        }
        else
        {
            cout <<N<<endl;
        }
    }
    return 0;
}