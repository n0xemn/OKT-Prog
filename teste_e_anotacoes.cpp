#include <bits/stdc++.h>

using namespace std;

// pra compilar o arquivo eh a mesma coisa do c, so uqe inves de gcc, vc usa g++

void exibir(vector<int> vec);

int main(){
    /*
    int b;
    cin >>b; // cin eh pra alocar o valor digitado no teclado na variavel, usa >>
    cout <<b<< endl; // cout e pra imprimir, usa <<
    */
    
    /*
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        ar[i] = i;
        cout <<ar[i]<<endl;
    }
    */

    /*
    vector<int> vec;
    for (int i = 0; i < 5; i++)
    {
        vec.push_back(i+1);
    }
    exibir(vec);
    for (int i = vec.size(); i > 0; i--)
    {
        vec.pop_back();
        exibir(vec);
    }
    */

    int a, b = 1;
    cin >>a;
    b *= a;
    cout <<b<<endl;
    cin >>a;
    b *= a;
    cout <<b<<endl;
    
    return 0;
}

void exibir(vector<int> vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout <<vec[i]<<" ";
    }
    cout <<endl;
}