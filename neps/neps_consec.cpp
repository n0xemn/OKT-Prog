#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, val, ref, seq = 1, seqma = 0;
    cin >>n;
    cin >>ref;
    for (int i = 0; i < n - 1; i++)
    {
        cin >>val;
        if (val == ref)
        {
            seq++;
        }
        else
        {
            if (seq > seqma)
            {
                seqma = seq;
            }
            seq = 1;
            ref = val;
        }
    }
    if (seq > seqma)
    {
        seqma = seq;
    }
    
    cout <<seqma<<endl;

    return 0;
}