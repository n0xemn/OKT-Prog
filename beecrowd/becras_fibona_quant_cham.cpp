#include <bits/stdc++.h>

using namespace std;

int fibo(int n){
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

int chama(int n){
    int aux = 0;
    if (n == 0 || n == 1)
    {
        aux++;
        return aux;
    }
    
    aux += chama(n - 1);
    aux += chama(n - 2);
    aux++;
    return aux;

}

int main(){
    int N, n;
    cin >>N;
    for (int i = 0; i < N; i++)
    {
        cin >>n;
        cout <<"fib("<<n<<") = "<<chama(n) - 1<<" calls = "<<fibo(n)<<endl;
    }

    return 0;
}