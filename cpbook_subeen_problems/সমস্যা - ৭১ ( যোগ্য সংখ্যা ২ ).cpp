#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int num,ck, pNum[5] = {6, 28, 496, 8128, 33550336};
    while(T--){
        cin >> num;
        for(int i=0; i<5; i++){
            if( pNum[i] <= num ){
                cout << pNum[i] << endl;
            }
        }
    }
    return 0;
}

