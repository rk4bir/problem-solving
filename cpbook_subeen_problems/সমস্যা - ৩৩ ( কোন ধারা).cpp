#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int a, b, c;
    for(int i=1; i<=T; i++){
        cin >> a >> b >> c;
        cout << "Case " << i << ": ";
        if( (b-a) == (c-b) && (b/float(a)) == (c/float(b)) ){
            cout << "Both" << endl;
        }else if( (b-a) == (c-b) ){
            cout << "Arithmetic Progression" << endl;
        }else if( (b/float(a)) == (c/float(b)) ){
            cout << "Geometric Progression" << endl;
        }else{
            cout << "None" << endl;
        }
    }
    return 0;
}
