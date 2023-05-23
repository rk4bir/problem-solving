#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;


int main()
{
    int T;
    cin >> T;
    int num, upto;
    for(int i=1; i<=T; i++){
        cin >> num >> upto;
        if( num > upto ){
            cout << "Invalid!" << endl;
        }else{
            for(int j=1; ; j++){
                if( num*j <= upto ){
                    cout << num*j << endl;
                }
                if( num*j > upto ) break;
            }
        }

    }
    return 0;
}

