#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i, j, counter, maxlen;
    int res_i, res_j;
    long long n;
    int current;
    while(scanf("%d %d", &i, &j) != EOF){
        maxlen = 0; // initializing result as 0 to compare with counter
        res_i = i;  // to print the way i and j inputed
        res_j = j;  // to print the way i and j inputed
        if(i>j) swap(i, j); // swap if range is not proper

        for(current=i; current<=j; current++){
            counter = 0;
            n = current;
            while(1){
                if(n == 1){
                    counter += 1;
                    break;
                }
                if(n%2 == 1){
                    n = (3*n) + 1;
                    counter += 1;
                    continue;
                }else{
                    n = int(n/2);
                    counter += 1;
                    continue;
                }
            }
            if( maxlen < counter ){
                maxlen = counter;
            }
        }
        cout << res_i << " " << res_j << " " << maxlen << endl;
    }
    return 0;
}

