#include <bits/stdc++.h>

using namespace std;

int brick(int N){
    if (N == 1 || N == 0)
    {
        return 1;
    }
    /*
    else if (N == 2)
    {
        return 2;
    }
    else if (N == 3)
    {
        return 3;
    }
    */
    else
    {
        return brick(N - 1) + brick(N - 2); 
    }
}

int main(){
    int N;
    while (1)
    {
        cin >>N;
        if (N == 0)
        {
            break;
        }
        cout <<brick(N)<<endl;
    }
    


    return 0;
}