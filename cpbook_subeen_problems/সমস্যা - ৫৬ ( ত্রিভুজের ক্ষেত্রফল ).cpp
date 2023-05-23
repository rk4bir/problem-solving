#include <iostream>
#include <cstdio>
#include <cmath>
#define PI acos(-1)
using namespace std;

int main()
{
    int T;
    cin >> T;
    int a, b, c;
    float area, angle, height, tmp;
    for(int i=1; i<=T; i++){
        cin >> a >> b >> c;
        area = 0;
        if( (a*a) + (b*b) == c*c ){
            area = 0.5*b*a;
        }else if( (a*a) + (c*c) == b*b ){
            area = 0.5*c*a;
        }else if( (b*b) + (c*c) == a*a ){
            area = 0.5*c*b;
        }else{
            if( a==b && b==c ){
                angle = PI / 3.0;
                height = sin(angle)*c;
                area = height*b*0.5;
            }else{
                tmp = ( (c*c) + (b*b) - (a*a) ) / float(2.0*c*b);
                angle = acos(tmp);
                height = c * sin(angle);
                area = 0.5*b*height;
            }
        }
        cout << "Area = ";
        printf("%.3f\n", area);
    }
    return 0;
}

