#include <iostream>
using namespace std;


int main() {
    int ar[1000], n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> ar[i];
    for(int i=n-1; i>-1; i--){
        cout << ar[i];
        if(i > 0) cout << ' ';
    }
    return 0;
}

