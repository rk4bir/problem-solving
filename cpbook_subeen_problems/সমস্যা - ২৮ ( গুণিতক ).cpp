#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int N, X, tmp;
    for(int i=1; i<=T; i++){
        cin >> X >> N;
        cout << "Case " << i << ":";
        for(int j=1; ; j++){
            tmp = X*j;
            if( tmp <= N ){
                cout << ' ' << tmp;
            }else{
                break;
            }
        }
        cout << "\n";
    }
    return 0;
}

