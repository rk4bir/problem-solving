
#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string num;
    int n;
    while(T--){
        cin >> num;
        n = num[num.length()-1] - '0' + 48;
        if( n%2 == 0 ){
            cout << "even" << endl;
        }else{
            cout << "odd" << endl;
        }
    }
    return 0;
}
