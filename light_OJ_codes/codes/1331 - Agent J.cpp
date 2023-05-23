#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
using namespace std;
double a, b, c;
double getTheta(char theta);

int main()
{
    double r1, r2, r3, thetaA, thetaB, thetaC, bigArea, s, smA1, smA2, smA3, smallArea;
    int tCase;
    scanf("%d", &tCase);
    for(int t=1; t<=tCase; t+=1){
        scanf("%lf %lf %lf", &r1, &r2, &r3);
    /// ARMS OF THE TRIANGLE
        a = r1 + r2;
        b = r2 + r3;
        c = r3 + r1;
    /// SEMI-PERIMETER OF THE TRIANGLE
        s = (a + b + c) * 0.5;

    /// AREA OF THE TRIANGLE
        bigArea = sqrt( s*(s-a)*(s-b)*(s-c) );

    /// ANGLE OF THE CIRCLES
        thetaA = getTheta('A');
        thetaB = getTheta('B');
        thetaC = getTheta('C');

    /// AREA FOR THE CIRCLES
        smA1 = r1*r1*0.5*thetaA;
        smA2 = r2*r2*0.5*thetaB;
        smA3 = r3*r3*0.5*thetaC;
        printf("Case %d: %.8lf\n", t,( bigArea - (smA1 + smA2 + smA3) ));
    }
    return 0;
}

double getTheta(char theta){
    if(theta == 'A') return acos( (c*c + a*a - b*b) / double(2.0*c*a) );
    if(theta == 'B') return acos( (a*a + b*b - c*c) / double(2.0*a*b) );
    if(theta == 'C') return acos( (b*b + c*c - a*a) / double(2.0*b*c) );
}
