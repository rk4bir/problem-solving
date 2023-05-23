#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int check, ck;
    string line;
    while(T--){
        cin >> line;
        check = 0;
        stack<int>result_gen;
        for(int i=0; i<line.length(); i++){
            if(line[i] == '0'){
                if( result_gen.empty() ){
                    check = 1;
                    break;
                }
                result_gen.pop();

            }else{
                result_gen.push(1);
            }
        }
        if(check == 1){
            cout << "MAGIC" << endl;
        }else{
            cout << "NORMAL" << endl;
        }
    }
    return 0;
}

