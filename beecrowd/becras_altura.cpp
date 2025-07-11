#include <bits/stdc++.h>

using namespace std;

int main(){
    int casos, pessoas, alt;
    vector<int> altura;
    cin >>casos;
    for (int i = 0; i < casos; i++)
    {
        cin >>pessoas;
        for (int j = 0; j < pessoas; j++)
        {
            cin >>alt;
            altura.push_back(alt);
        }
        sort(altura.begin(), altura.end());
        cout <<altura[0];
        for (int j = 1; j < pessoas; j++)
        {
            cout <<" "<<altura[j];
        }
        cout <<endl;
        altura.clear();
    }

    return 0;
}