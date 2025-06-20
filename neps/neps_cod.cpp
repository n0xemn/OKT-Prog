#include <bits/stdc++.h>

using namespace std;

int main(){
    int N, aux, qtde = 0;
    queue<int> seq;
    cin >>N;
    for (int i = 0; i < N; i++)
    {
        cin >>aux;
        seq.push(aux);
    }
    while (seq.size() != 0)
    {
        if (seq.front() == 1)
        {
            seq.pop();
            if (seq.front() == 0 && seq.size() != 0)
            {
                seq.pop();
                if (seq.front() == 0 && seq.size() != 0)
                {
                    seq.pop();
                    qtde++;
                }
            }
        }
        else
        {
            seq.pop();
        }
    }
    cout <<qtde<<endl;

    return 0;
}