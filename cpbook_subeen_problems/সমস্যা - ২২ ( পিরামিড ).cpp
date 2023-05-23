#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    char star = '*', sp=' ';
    int n, increament, sp_controller;
    while(T--){
        cin >> n;
        increament = 1;
        sp_controller = n-1;
        for(int i=1; i<=n; i++){
            for(int k=sp_controller; k>=1; k--){
                cout << sp;
            }
            for(int j=1; j<=increament; j++){
                cout << star;
            }
            cout << "\n";
            increament += 2;
            sp_controller--;
        }
    }
    return 0;
}



