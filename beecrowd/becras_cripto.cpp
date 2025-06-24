#include <bits/stdc++.h>

using namespace std;

int main(){
    int caso;
    string palavr;
    stack<char> aux;
    cin >>caso;
    for (int i = 0; i < caso; i++)
    {
        getline(cin, palavr);
        for (int j = 0; j < palavr.size(); j++)
        {
            if ((palavr[j] > 'A' && palavr[j] < 'Z') || (palavr[j] > 'a' && palavr[j] < 'z'))
            {
                palavr[j] += 3;
            }
        }
        for (int j = 0; j < palavr.size(); j++)
        {
            aux.push(palavr[j]);
        }
        for (int j = 0; j < palavr.size(); j++)
        {
            palavr[j] = aux.top();
            aux.pop();
        }
        for (int j = palavr.size()/2; j < palavr.size(); j++)
        {
            palavr[j] -= 1;
        }
        cout  <<palavr<<endl;
    }

    return 0;
}