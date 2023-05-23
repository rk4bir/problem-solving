
#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string number;
    int tmp, product, num;
    for(int i=1; i<=T; i++){
        cin >> number;
        product = 1;
        num = 0;
        for(int j=(number.length() - 1); j>=0; j--){
            tmp = number[j] - '0';
            if( tmp%2 == 0 ){
                tmp += 1;
                num += tmp*product;

            }else if( tmp%2 == 1 ){
                tmp -= 1;
                num += tmp*product;
            }
            product *= 10;
        }
        cout << num << endl;
    }
    return 0;
}
