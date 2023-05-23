#include <iostream>
using namespace std;

int main()
{
    int i, j, T, caseNo, row, col;
    cin >> T;
    int n, sum, tmp;
    caseNo = 1;
    while(T--){
        //cout << "\n";
        cin >> n;
        sum = 0;
        for(i=0; i<n; i++){
            cin >> tmp;
            if(tmp > 0){
                sum += tmp;
            }
        }
        cout << "Case " << caseNo << ": " << sum << endl;
        caseNo++;
    }
    return 0;
}
