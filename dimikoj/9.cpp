#include <iostream>
using namespace std;
void whole_squareNum(int x);

int main()
{
    int T;
    cin >> T;
    int n;
    while(T--){
        cin >> n;
        whole_squareNum(n);
    }
    return 0;
}


void whole_squareNum(int x){
    int ck = 0;
    if( x == 1 ){
        ck = 1;
    }else{
        for(int i=2; i<=int(x/2); i++){
            if( i*i == x ){
                ck = 1;
                break;
            }
        }
    }
    if( ck == 0 ){
        cout << "NO" << endl;
    }else if( ck == 1 ){
        cout << "YES" << endl;
    }
}
