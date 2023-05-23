#include <iostream>
#include <string>
using namespace std;


int main()
{
    int T, i, j, k, caseNo;
    cin >> T;
    caseNo = 1;
    string line;
    int result, N;
    while(T--){
        cout << "Case " << caseNo << ":" << endl;
        cin >> N;
        result = 0;
        while(N--){
            cin >> line;
            if(line == "donate"){
                cin >> k;
            }
            if(line == "report"){
                cout << result << endl;
            }else{
                result += k;
            }
        }
        //cout << "Case " << caseNo << ": " <<  << endl;
        caseNo++;
    }
    return 0;
}
