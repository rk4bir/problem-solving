#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;
long long factorial(int n);
int main()
{
    int T;
    cin >> T;
    int N;
    for(int i=1; i<=T; i++){
        cin >> N;
        cout << factorial(N) << endl;
    }
    return 0;
}

long long factorial(int n)
{
    if( n == 0 || n == 1 ){
        return 1;
    }
    long long f=1;
    for(int i=2; i<=n; i++){
        f*=i;
    }
    return f;
}

