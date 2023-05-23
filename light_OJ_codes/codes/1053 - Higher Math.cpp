#include <iostream>
using namespace std;

int main()
{
    int i, j, T, caseNo, tmp, n_onoroy, res;
    cin >> T;
    int a, b, c, ck;
    caseNo = 1;
    while(T--){
        cin >> a >> b >> c;
        ck = 0;
        if( ((a*a) + (b*b))  == (c*c) ){
            ck = 1;
        }else if( ((c*c) + (b*b))  == (a*a) ){
            ck = 1;
        }else if( ((a*a) + (c*c))  == (b*b) ){
            ck = 1;
        }

        if(ck == 1){
            cout << "Case " << caseNo << ": " << "yes" << endl;
        }else if(ck == 0){
            cout << "Case " << caseNo << ": " << "no" << endl;
        }
        caseNo++;

    }
    return 0;
}
