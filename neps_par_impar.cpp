#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, a, b, seq = 1;
    string jog1;
    string jog2;
    while (1)
    {
        cin >>N;
        if (N == 0)
        {
            break;
        }
        cout <<"Teste "<<seq<<endl;
        cin >>jog1>>jog2;
        for (int i = 0; i < N; i++)
        {
            cin >>a>>b;
            if ((a + b) % 2 == 0)
            {
                cout <<jog1<<endl;
            }
            else
            {
                cout <<jog2<<endl;
            }
        }
        cout <<endl;
        seq++;
    }
    

    return 0;
}