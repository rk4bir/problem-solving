#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
/// concept: product of odd & even is always even so w is to be even
int main()
{
    int T;
    cin >> T;
    long long odd, even, w;
    int i ,j;
    for(int tCase=1; tCase<=T; tCase++){
        cin >> w;
        if( w%2 != 0 ){
            printf("Case %d: Impossible\n", tCase);
            continue;
        }
        odd = w/2;
        even = 2;
        while( odd%2==0 ){
            odd = odd/2;
            even = even*2;
        }
        cout << "Case " << tCase << ": " << odd << " " << even << endl;
    }
    return 0;
}
