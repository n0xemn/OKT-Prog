#include <bits/stdc++.h>

using namespace std;

int main(){
    int caso, quant = 0;
    string led;
    cin >>caso;
    for (int i = 0; i < caso; i++)
    {
        cin >> led;
        for (int j = 0; j < led.size(); j++)
        {
            if (led[j] == '1')
            {
                quant += 2;
            }
            else if (led[j] == '2' || led[j] == '3' || led[j] == '5')
            {
                quant += 5;
            }
            else if (led[j] == '4')
            {
                quant += 4;
            }
            else if (led[j] == '6' || led[j] == '9' || led[j] == '0')
            {
                quant += 6;
            }
            else if (led[j] == '7')
            {
                quant += 3;
            }
            else
            {
                quant += 7;
            }
        }
        cout <<quant<<" leds"<<endl;
        quant = 0;
    }

    return 0;
}