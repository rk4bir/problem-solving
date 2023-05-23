#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int tmp, pos_c = 0, neg_c = 0;
    while(T--){
        cin >> tmp;
        if(tmp > 0){
            pos_c += 1;
        }else if(tmp < 0){
            neg_c += 1;
        }
    }
    cout << pos_c << " " << neg_c << endl;
    return 0;
}
