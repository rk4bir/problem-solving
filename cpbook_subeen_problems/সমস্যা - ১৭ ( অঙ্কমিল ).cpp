#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int num1, num2;
    int n_2, n_1, n1, n2, n3, n4;
    while(T--){
        cin >> num1 >> num2;
        n_1 = -1;
        n_2 = -2;
        n1 = int(num1/10);
        n2 = num1 - (n1*10);
        n3 = int(num2/10);
        n4 = num2 - (n3*10);
        if( n1 == n3 || n1 == n4 ){
            n_1 = n1;
        }
        if( n2 == n3 || n2 == n4 ){
            n_2 = n2;
        }
        if( n_1 == -1 && n_2 == -2 ){
            cout << "N" << endl;
        }else{
            if( n_1 == -1 && n_2 != -2 ){
                cout << n_2 << endl;
            }else if( n_1 != -1 && n_2 == -2 ){
                cout << n_1 << endl;
            }else if( n_1 != -1 && n_2 != -2 ){
                if( n_1 == n_2 ){
                    cout << n_1 << endl;
                }else if( n_1 > n_2 ){
                    cout << n_2 << n_1 << endl;
                }else{
                    cout << n_1 << n_2 << endl;
                }
            }
        }
    }
    return 0;
}
