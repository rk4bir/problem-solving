#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int T, caseNo = 1;
    cin >> T;
    double bird_covered, dis, t1, t2, t, v1, v2, v3, a1, a2;
    while(T--){
    	cin >> v1 >> v2 >> v3 >> a1 >> a2;
        t1 = v1 / a1;
        t2 = v2 / a2;
        t = max(t1, t2);
        dis = (v1*t1) - (0.5*a1*t1*t1) + (v2*t2) - (0.5*a2*t2*t2);
        bird_covered = t*v3;
        printf("Case %d: %.9lf %.9lf\n", caseNo, dis, bird_covered);
        caseNo++;
    }
    return 0;
}


