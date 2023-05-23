#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int arm;
    char symbol = '*';
    while(T--){
        cin >> arm;
        for(int row=0; row<arm; row++){
            for(int col=0; col<arm; col++){
                cout << symbol;
            }
            cout << "\n";
        }
    }
    return 0;
}

