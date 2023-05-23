#include <iostream>
using namespace std;


int main()
{
    int T;
    cin >> T;
    int counter, ck;
    string line;
    while(T--){
        cin >> line;
        counter = 0;
        ck = 0;
        for(int i=0; i<line.length(); i++){
            if( line[i] != '0' ){
                if( ck == 0 ){
                    ck = 1;
                }
            }
            if( ck == 1 ){
                counter++;
            }
        }
        if( counter == 0 ){
            cout << ++counter << endl;
        }else{
            cout << counter << endl;
        }
    }
    return 0;
}
