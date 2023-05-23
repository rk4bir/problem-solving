#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int h, b;
    for(int i=1; i<=T; i++){
        cin >> b >> h;
        cout << "Case " << i << ": " << (b*h) << endl;
    }
    return 0;
}

