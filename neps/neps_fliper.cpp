#include <bits/stdc++.h>

using namespace std;

int main(){
    char fim[] = {'C', 'B', 'A'};
    int P, R;
    cin >>P>>R;
    if (P == 0)
    {
        cout <<"C"<<endl;
    }
    else
    {
        cout <<fim[P + R]<<endl;
    }

    return 0;
}