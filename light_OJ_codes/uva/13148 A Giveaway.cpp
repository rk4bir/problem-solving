#include <iostream>
#include <string>
#include <cmath>
#include <stack>
#include <cstdio>
#include <iomanip>
#include <cstdio>

#define PI acos(-1)
using namespace std;


int main()
{
    int special[21] = {
                        1, 64, 729, 4096, 15625, 46656,
                        117649, 262144, 531441,1000000,
                        1771561, 2985984, 4826809, 7529536,
                        11390625, 16777216, 24137569, 34012224,
                        47045881, 64000000, 85766121
                    };
    long long N;
    int ck;
    while(true){
        cin >> N;
        if( N>0 && N<100000000 ){
            ck = 0;
            for(int i=0; i<21; i+=1){
                if( special[i] == N ){
                    ck = 1;
                    break;
                }
            }
            if( ck == 1 ){
                cout << "Special" << endl;
            }else{
                cout << "Ordinary" << endl;
            }
        }else{
            break;
        }
    }
    return 0;
}
