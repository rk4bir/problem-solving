#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n;
    long long val;
    vector<long long> V;
    cin >> n;
    for(int i=0; i<n; ++i) {
        cin >> val;
        V.push_back(val);
    }
    sort(V.begin(), V.end());
    for(int i=0; i<n; ++i) {
        cout << V[i];
        if( i < V.size()-1 ){
            cout << ' ';
        }
    }
    cout << endl;
    return 0;
}

