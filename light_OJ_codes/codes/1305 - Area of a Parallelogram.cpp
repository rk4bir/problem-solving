#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int T, i, j, k, caseNo = 1;
    cin >> T;
    int ax, ay, bx, by, cx, cy, dx, dy, area, tmp;
    while(T--){
        cin >> ax >> ay >> bx >> by >> cx >> cy;
        dx = ax + cx - bx;
        dy = ay + cy - by;
        tmp = fabs( ( (ax*by) + (bx*cy)+(cx*dy) + (dx*ay) ) - ( (ay*bx) + (by*cx) + (cy*dx) + (dy*ax)) );
        area = tmp/2.0;
        cout << "Case " << caseNo << ": " << dx << " " << dy << " " << area << endl;
        caseNo++;
    }
    return 0;
}
