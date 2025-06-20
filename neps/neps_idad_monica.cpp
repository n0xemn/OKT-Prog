#include <bits/stdc++.h>

using namespace std;

int main(){
    int M, f1, f2, f3, max;
    cin >>M>>f1;
    max = f1;
    cin >>f2;
    if (f2 > f1)
    {
        max = f2;
    }
    f3 = M - (f1 + f2);
    if (f3 > max)
    {
        max = f3;
    }
    cout <<max<<endl;

    return 0;
}