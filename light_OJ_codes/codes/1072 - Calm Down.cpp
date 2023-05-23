#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int i, j, k, T, caseNo;
    caseNo = 1;
    cin >> T;
    double R, r_n, x, PI;
    PI = 3.14159265358979323846;
    int n;
    while(T--){
        cin >> R >> n;
        x = sin(PI/n);
        r_n = (x*R)/(1+x);
        cout << "Case " << caseNo << ": ";
        printf("%.10lf\n", r_n);
        caseNo++;
    }
    return 0;
}
