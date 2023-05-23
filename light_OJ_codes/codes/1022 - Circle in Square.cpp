#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int T, i, j, caseNo;
    cin >> T;
    caseNo = 1;
    double radius, arm, area;
    double pi = 3.14159265358979323846;
    while(T--){
        cin >> radius;
        arm = 2*radius;
        area = pow(arm, 2.0) - (pi*pow(radius, 2.0));
        printf("Case %d: %.2lf\n",caseNo, area);
        caseNo++;
    }
    return 0;
}
