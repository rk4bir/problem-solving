#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
    int i, j, k, T, caseNo;
    caseNo = 1;
    cin >> T;
    double AB, AC, BC, r, AD;
    while(T--){
        cin >> AB >> AC >> BC >> r;
        AD = AB * sqrt(r / (1 + r));
        cout << "Case " << caseNo << ": ";
        printf("%.9lf\n", AD);
        caseNo++;
    }
    return 0;
}
