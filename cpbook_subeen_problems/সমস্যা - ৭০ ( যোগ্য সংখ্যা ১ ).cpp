#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string num, pNum[8] = {
                            "6",
                            "28",
                            "496",
                            "8128",
                            "33550336",
                            "8589869056",
                            "137438691328",
                            "2305843008139952128"
                            };
    int ck;
    while(T--){
        cin >> num;
        ck = 0;
        for(int i = 0; i < 8; i++){
            if( num == pNum[i] ){
                ck = 1;
                break;
            }
        }
        if(ck==1){
            cout << "YES, " << num << " is a perfect number!" << endl;
        }else{
            cout << "NO, " << num << " is not a perfect number!" << endl;
        }
    }
    return 0;
}

