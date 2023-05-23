#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string line, tmp, f_line[100];
    cin.get();
    int len;
    for(int i=1; i<=T; i++){
        getline(cin, line);
        tmp = "";
        len = 0;
        for(int j=0; j<line.length(); j++){
            tmp += line[j];
            if( line[j] == ' ' ){
                f_line[len] = tmp;
                tmp = "";
                len += 1;
            }
        }
        f_line[len] = tmp;
        for(int j=len; j>=0; j--){
            cout << f_line[j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

