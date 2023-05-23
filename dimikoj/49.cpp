#include <iostream>
#include <cmath>
using namespace std;

bool is_prime(long long x);

int main()
{
    int T;
    cin >> T;
    long long n;
    for(int i=1; i<=T; i++){
        cin >> n;
        if( is_prime(n) ){
            cout << n << " is a prime" << endl;
        }else{
            cout << n << " is not a prime" << endl;
        }
    }
    return 0;
}


bool is_prime(long long x){
    if (x == 2){
    	return true;
    }
    if (x%2 == 0){
    	return false;
    }
    for(int i=3; i<=sqrt(x); i+=2){
        if( x%i == 0 ){
            return false;
        }
    }
    return true;
}
