#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#define PI acos(-1)
using namespace std;

int main()
{
    int T, i, j, caseNo;
    cin >> T;
    caseNo = 1;
    int r1, r2, h, p;
    double result, R;
    while(T--){
        cin >> r1 >> r2 >> h >> p;
        R= r2 + (r1-r2)*(double(p)/h);
        result = 1/3.0 * PI * p *( R*R + R*r2 + r2*r2 );
        cout << "Case " << caseNo << ": ";
        printf("%.9lf\n", result);
        caseNo++;
    }
    return 0;
}
