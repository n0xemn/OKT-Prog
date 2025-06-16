#include <bits/stdc++.h>

using namespace std;

int main(){
    int A, B, minn; 
    cin >>A>>B;
    minn = min(A, B);
    cout <<minn - abs(A - B)<<endl;
}