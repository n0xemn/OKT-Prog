#include <bits/stdc++.h>

using namespace std;

// pra compilar o arquivo eh a mesma coisa do c, so uqe inves de gcc, vc usa g++

// void exibir(vector<int> vec);

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

    /*
    mechendo com float ou double, em c++ ele eh impresso em notacao cientifica, se quiser imprimir que nem em c tem que usa fixed ex: cout <<fixed<<numero; e pra definir o tanto de casas decimais a serem impressas eh com setprecision(n) ex: ex: cout <<fixed<<setprecision(3)<<numero;
    */

    /*
    int a, b = 1;
    cin >>a;
    b *= a;
    cout <<b<<endl;
    cin >>a;
    b *= a;
    cout <<b<<endl;
    */
    /*
    int a, b;
    a = b = 2;
    cout <<a<<" "<<b<<endl;
    */
    string teste;
    vector<string> ah;
    // getline(cin, teste); // ler string com espaços
    cin >>teste;
    ah.push_back(teste);
    cin >>teste;
    ah.push_back(teste);
    
    /*
    for (int i = 0; i < ah.size(); i++)
    {
        cout <<ah[i]<<" ";
    }
    */
    
    //int a = teste.size();
    cout <<ah.size()<<endl;

    // SORT recebe um ponteiro pro primerio elemento a ser ordenado, depois um ponteiro para o primeiro element
    // que nao sera ordenado, e uma funcao para a comparacao que o sort usara para fazer ordenacao, essa funcao
    // deve retornar um valor boleano, retorna true se o primeiro parametro deveria ficar antes do segundo parametro
    // de acordo com a comparacao

    return 0;
}

/*
void exibir(vector<int> vec){
    for (int i = 0; i < vec.size(); i++)
    {
        cout <<vec[i]<<" ";
    }
    cout <<endl;
}
*/