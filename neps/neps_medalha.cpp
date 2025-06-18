#include <bits/stdc++.h>

using namespace std;

int main(){
    int t1, t2, t3;
    vector <int> at;
        
    cin >>t1;
    at.push_back(t1);
    
    cin >>t2;
    at.push_back(t2);

    cin >>t3;
    at.push_back(t3);

    sort(at.begin(), at.end());
    
    for (int i = 0; i < 3; i++)
    {
        if (t1 == at[i])
        {
            cout <<"1"<<endl;
        }
        else if (t2 == at[i])
        {
            cout <<"2"<<endl;
        }
        else if (t3 == at[i])
        {
            cout <<"3"<<endl;
        }
    }
    
    return 0;
}