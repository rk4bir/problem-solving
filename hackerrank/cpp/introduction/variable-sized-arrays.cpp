#include <iostream>
#include <vector>
using namespace std;


int main() {
    long int n, k, q, i, j, data;
    cin >> n >> q;
    vector< vector<int> > ar(n); // declaring 2d array with row size = n
    // array input
    for(int r=0; r<n; r++) {
        cin >> k;
        for(int c=0; c<k; c++) {
            cin >> data;
            ar[r].push_back(data); // entering value in row = r
        }
    }
    // look up
    for(int r=0; r<q; r++){
        cin >> i >> j;
        cout << ar[i][j] << endl;
    }
    return 0;
}


