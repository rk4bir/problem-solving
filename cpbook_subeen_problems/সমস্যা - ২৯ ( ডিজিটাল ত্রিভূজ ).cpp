#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int row, sym, incrmnt;
    for(int i=1; i<=T; i++){
        cin >> sym >> row;
        incrmnt = 1;
        cout << "Case " << i << ":" << endl;
        for(int j=1; j<=row; j++){
            for(int k=1; k<=incrmnt; k++){
                cout << sym;
            }
            cout << "\n";
            incrmnt++;
        }
    }
    return 0;
}
