#include <iostream>
using namespace std;
int primeNum(int x);

int main()
{
    int T;
    cin >> T;
    int num, counter;
    while(T--){
        counter = 0;
        for(int i=1; i<=10; i++){
            cin >> num;
            if( primeNum(num) == 1 ){
                counter += 1;
            }
        }
        cout << counter << endl;
    }
    return 0;
}

int primeNum(int x){
    int ck = 1;
    if( x < 2){
        ck = 0;
    }else if( x > 2 ){
        for(int i=2; i<x; i++){
            if( x % i == 0 ){
                ck = 0;
                break;
            }
        }
    }
    return ck;
}

