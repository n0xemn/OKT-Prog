#include <bits/stdc++.h>

using namespace std;
// vec.push_back(it)
// vec.pop_back()
int main(){
    int N, X;
    vector <int> soma;
    cin >>N;
    for (int i = 0; i < N; i++)
    {
        cin >>X;
        if (X == 0)
        {
            soma.pop_back();
        }
        else
        {
            soma.push_back(X);
        }
    }
    X = 0;
    for (int i = 0; i < soma.size(); i++)
    {
        X += soma[i]; 
    }
    cout <<X<<endl;
    
    return 0;
}