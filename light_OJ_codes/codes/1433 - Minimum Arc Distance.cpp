#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int T, i, p, j, k, caseNo;
    cin >> T;
    caseNo = 1;
    double o1, o2, a1, a2, b1, b2, ob, oa, ab, tmp, tmp2, angle_o, result;
    while(T--){
        cin >> o1 >> o2 >> a1 >> a2 >> b1 >> b2;
        tmp = pow((o1-a1), 2.0) + pow((o2-a2), 2.0);
        oa = sqrt(tmp);
        tmp = pow((o1-b1), 2.0) + pow((o2-b2), 2.0);
        ob = sqrt(tmp);
        tmp = pow((b1-a1), 2.0) + pow((b2-a2), 2.0);
        ab = sqrt(tmp);
        tmp2 = (pow(oa, 2.0) + pow(ob, 2.0) - pow(ab, 2.0))/(2*oa*ob);
        angle_o = acos(tmp2);
        result = ob*angle_o;
        cout << "Case " << caseNo << ": ";
        printf("%.8lf\n", result);

        caseNo++;
    }
    return 0;
}
