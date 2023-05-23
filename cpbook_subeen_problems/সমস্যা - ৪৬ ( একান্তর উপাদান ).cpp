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
    int num[1000];
    int n;
    for(int i=1; i<=T; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            cin >> num[j];
        }
        cout << "Set " << i << ":";
        for(int j=0; j<n; j+=2){
            cout << ' ' << num[j];
        }
        cout << endl;
    }
    return 0;
}
