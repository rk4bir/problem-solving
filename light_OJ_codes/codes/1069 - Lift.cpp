#include <iostream>
using namespace std;

int main()
{
    int i, j, T, caseNo;
    cin >> T;
    int user, lift, counter, tmp, in_out, toGround, liftCome;
    caseNo = 1;
    while(T--){
        cin >> user >> lift;
        in_out = 19;  /// 3 + 5 + 3 + 3 + 5;
        tmp = lift - user;
        if(tmp < 0){
            tmp = -1*tmp;
        }
        liftCome = 4 * tmp;
        toGround = 4 * (user-0);
        counter = in_out + liftCome + toGround;
        cout << "Case " << caseNo << ": " << counter << endl;
        caseNo++;

    }
    return 0;
}
