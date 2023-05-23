#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int n;
    for(int i=1; i<=T; i++){
        cin >> n;
        cout << "Case " << i << ":";
        for(int j=1; j<=n; j++){
            if( n%j == 0 ){
                cout << ' ' << j;
            }
        }
        cout << "\n";
    }
    return 0;
}

