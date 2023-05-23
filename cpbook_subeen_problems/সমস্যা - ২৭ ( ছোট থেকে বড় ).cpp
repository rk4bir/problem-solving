#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int n[3], p, q;
    for(int i=1; i<=T; i++){
        for(int j=0; j<3; j++){
            cin >> n[j];
        }
        for(p=0; p<2; p++){
            for(q=p+1; q<3; q++){
                if(n[p] > n[q]){
                    swap(n[q], n[p]);
                }
            }
        }
        cout << "Case " << i << ":";
        for(p=0; p<3; p++){
            cout << ' ' << n[p];
        }
        cout << "\n";
    }
    return 0;
}

