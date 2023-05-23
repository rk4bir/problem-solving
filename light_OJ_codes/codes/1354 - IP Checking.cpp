#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int binaryTodecimal(char x[8]);

int main()
{
    int T, i, j, caseNo;
    cin >> T;
    caseNo = 1;
    int a1, a2, a3, a4, b1, b2, b3, b4;
    char m, n, o;
    string binary;
    char tmp[8];
    while(T--){
        cin >> a1 >> m >> a2 >> n >> a3 >> o >> a4;
        cin >> binary;
        for(i=0, j=0; i<=7; i++){
            tmp[j] = binary[i];
            j++;
        }
        b1 = binaryTodecimal(tmp);
        for(i=9, j=0; i<=16; i++){
            tmp[j] = binary[i];
            j++;
        }
        b2 = binaryTodecimal(tmp);
        for(i=18, j=0; i<=25; i++){
             tmp[j] = binary[i];
             j++;
        }
        b3 = binaryTodecimal(tmp);
        for(i=27, j=0; i<=34; i++){
            tmp[j]  = binary[i];
            j++;
        }
        b4 = binaryTodecimal(tmp);
        if( a1==b1 && a2==b2 && a3==b3 && a4==b4){
            cout << "Case " << caseNo << ": Yes" << endl;
        }else{
            cout << "Case " << caseNo << ": No" << endl;
        }
        caseNo++;
    }
    return 0;
}

int binaryTodecimal(char x[8]){
    int i, decimal, integer[8];
    for(i=0; i<8; i++){
        integer[i] = x[i] - '0';
    }
    decimal = 0;
    int t = 7;
    for(i=0; i<8; i++){
        decimal += integer[i]*int(pow(2.0, t));
        t--;
    }
    return decimal;
}
