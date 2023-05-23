#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;


int main()
{
    int T;
    cin >> T;
    int n;
    double sum;
    for(int i=1; i<=T; i++){
        cin >> n;
        for(int j=n; j>=2; j--){
            cout << "2^" << j << " + ";
        }
        cout << "2 + 1" << endl;
    }
    return 0;
}

