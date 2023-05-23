#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string webpage[100], command;
    int controller, w_num;
    for(int tCase=1; tCase<=T; tCase++){
        webpage[0] =  "http://www.lightoj.com/";
        controller = 0;
        int i = 0;
        printf("Case %d:\n", tCase);
    label1:
        cin >> command;
        if( command == "VISIT" ){
            i += 1;
            controller = i;
            cin >> webpage[controller];
            cout << webpage[controller] << endl;
            goto label1;
        }else if( command == "BACK" ){
            if( i-1 < 0 ){
                cout << "Ignored" << endl;
                goto label1;
            }else{
                cout << webpage[--i] << endl;
                goto label1;
            }
        }else if( command == "FORWARD" ){
            if( i+1 > controller ){
                cout << "Ignored" << endl;
                goto label1;
            }else{
                cout << webpage[++i] << endl;
                goto label1;
            }
        }else if( command == "QUIT" ){
            continue;
        }

    }
    return 0;
}
