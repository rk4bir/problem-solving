#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int num;
    for(int i=1; i<=T; i++){
        cin >> num;
        cout << "Case " << i << ": ";
        if( num >= 80 ){
            cout << "A+" << endl;
        }else if( num >= 75 ){
            cout << "A" << endl;
        }else if( num >= 70 ){
            cout << "A-" << endl;
        }else if( num >= 65 ){
            cout << "B+" << endl;
        }else if( num >= 60 ){
            cout << "B" << endl;
        }else if( num >= 55 ){
            cout << "B-" << endl;
        }else if( num >= 50 ){
            cout << "C" << endl;
        }else if( num >= 45 ){
            cout << "D" << endl;
        }else{
            cout << "F" << endl;
        }
    }
    return 0;
}
