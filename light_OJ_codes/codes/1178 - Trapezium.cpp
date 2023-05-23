#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int T, caseNo;
    caseNo = 1;
    cin >> T;
    double a, b, c, d, h, area, x, y, p, tmp;
    while(T--){
        cin >> a >> b >> c >> d;
        if(a < c){
            x = c - a;
            y = (d*d) - (b*b);
            p = (y + (x*x)) / (2 * x);
            h = sqrt( (d*d) - (p*p) );
            area = 0.5 * (a+c) * h;
        }else{
            x = a - c;
            y = (d*d) - (b*b);
            p = (y + (x*x)) / (2 * x);
            h = sqrt( (d*d) - (p*p) );
            area = 0.5 * (a+c) * h;
        }
        cout << "Case " << caseNo << ": ";
        printf("%.10lf\n", area);
        caseNo++;
    }
    return 0;
}

