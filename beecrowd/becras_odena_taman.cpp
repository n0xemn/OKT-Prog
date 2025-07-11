#include <bits/stdc++.h>

using namespace std;

int main(){
    int caso;
    string palavra;
    vector<string> vet;
    cin >>caso;
    for (int i = 0; i < caso; i++)
    {
        cin >>palavra;
        while (palavra != "\n") // perguntar como fazer um while parar com a leitura de um \n (enter)
        {
            cout <<"agua ";
            vet.push_back(palavra);
            cin >>palavra;
        }
        //sort(vet.begin(), vet.end());
        for (int j = 0; j < vet.size(); j++)
        {
            cout <<vet[i];
        }
        cout <<endl;
    }
    
    return 0;
}