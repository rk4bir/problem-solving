#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int n;
    while(T--){
        cin >> n;
        if( n%2 == 0 ){
            cout << "red" << endl;
        }else if( n%2 == 1 ){
            cout << "blue" << endl;
        }
    }
    return 0;
}



