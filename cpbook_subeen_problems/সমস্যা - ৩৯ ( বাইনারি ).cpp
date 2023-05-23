#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;
string decimalToBinary(int x);

int main()
{
    int T;
    cin >> T;
    int n;
    string bin;
    for(int i=1; i<=T; i++){
        cin >> n;
        if( n==1 ){
            cout << "0" << "\n1" << endl;
        }else{
            for(int i=2; ; i++){
                bin = decimalToBinary(i);
                if( bin.length() == n ){
                    cout << bin << endl;;
                }
                if( bin.length() > n ){
                    break;
                }
            }
        }
    }
    return 0;
}


string decimalToBinary(int x){
    string bin = "";
    stack<char>binary;
    while(1){
        if( x==1 ){
            binary.push('1');
            break;
        }
        if( x%2 == 0 ){
            x /= 2;
            binary.push('0');
        }else if( x%2 == 1 ){
            x /= 2;
            binary.push('1');
        }
    }
    while(!binary.empty()){
        bin += binary.top();
        binary.pop();
    }
    return bin;
}
