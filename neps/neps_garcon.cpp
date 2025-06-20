#include <bits/stdc++.h>

using namespace std;

int main(){
    int ban, L, C, total = 0;
    cin >>ban;
    for (int i = 0; i < ban; i++)
    {
        cin >>L>>C;
        if (L > C)
        {
            total += C;
        }
    }
    cout <<total<<endl;

    return 0;
}