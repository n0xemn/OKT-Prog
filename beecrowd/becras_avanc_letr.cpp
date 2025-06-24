#include <bits/stdc++.h>

using namespace std;

int main(){
    int caso, opera = 0;
    cin >>caso;
    string A;
    string B;
    for (int i = 0; i < caso; i++)
    {
        cin >>A>>B;
        for (int j = 0; j < A.size(); j++)
        {
            if (B[j] > A[j])
            {
                opera += B[j] - A[j];
            }
            else if (B[j] < A[j])
            {
                opera += 26 - (A[j] - B[j]);
            }
        }
        cout <<opera<<endl;
        opera = 0;
    }

    return 0;
}