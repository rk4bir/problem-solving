#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long x);

int main()
{
    int T, a, b, counter;
    cin >> T;
    for(int i=1; i<=T; i++){
        cin >> a >> b;
        counter = 0;
        for(int n=a; n<b+1; n++){
            if(is_prime(n)) counter++;
        }
        cout << counter << endl;
    }
    return 0;
}


bool is_prime(long long x){
    if (x == 2) return true;
    if (x < 2) return false;
    if (x%2 == 0) return false;
    for(int i=3; i<=sqrt(x); i+=2){
        if( x%i == 0 ) return false;
    }
    return true;
}
