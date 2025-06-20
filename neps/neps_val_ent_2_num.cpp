#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >>a>>b;
    if (a - b < 0)
    {
        for (int i = a; i <= b; i++)
        {
            if (i == b)
            {
                cout <<i<<endl;
            }
            else
            {
                cout <<i<<" ";
            }
        }
    }
    else if (a - b > 0)
    {
        for (int i = b; i <= a; i++)
        {
            if (i == a)
            {
                cout <<i<<endl;
            }
            else
            {
                cout <<i<<" ";
            }
        }
    }
    else
    {
        cout <<a<<endl;
    }
    

    return 0;
}