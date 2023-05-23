#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int x, y, z;
    for(int i=1; i<=T; i++){
        cin >> x >> y >> z;
        cout << "Case " << i << ":" << endl;
        for(int a=0; a<=x; a++){
            for(int b=1; b<=y; b++){
                for(int c=2; c<=z; c++){
                    if( (a < b && b < c) && (a != b ||  b != c) ){
                        cout << a << " " << b << " " << c << endl;
                    }
                }
            }
        }

    }
    return 0;
}

