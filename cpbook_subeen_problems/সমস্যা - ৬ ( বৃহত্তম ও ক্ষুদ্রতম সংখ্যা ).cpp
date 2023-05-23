#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int large, small, num[5];
    while(T--){
        for(int i=0; i<5; i++){
            cin >> num[i];
        }
        large = num[0];
        small = num[0];
        for(int j=1; j<5; j++){
            if( small > num[j] ){
                small = num[j];
            }
            if( large < num[j] ){
                large = num[j];
            }
        }
        cout << large << " " << small << endl;
    }
    return 0;
}


