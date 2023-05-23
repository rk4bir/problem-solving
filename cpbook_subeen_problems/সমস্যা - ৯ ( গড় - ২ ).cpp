#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int num, sum, n;
    float avg;
    while(T--){
        sum = 0;
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> num;
            sum += num;
        }
        avg = sum / float(n);
        printf("%0.2f\n", avg);
    }
    return 0;
}

