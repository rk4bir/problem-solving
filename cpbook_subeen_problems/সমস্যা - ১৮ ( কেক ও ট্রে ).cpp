#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int r, h, w, diameter;
    while(T--){
        cin >> r >> h >> w;
        diameter = 2*r;
        if( h >= diameter && w>= diameter ){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

