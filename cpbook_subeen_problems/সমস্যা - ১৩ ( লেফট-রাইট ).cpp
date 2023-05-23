#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string line;
    while(T--){
        cin >> line;
        for(int i=0; i<line.length(); i++){
            if( line[i] == 'L' ){
                line[i] = line[i-1];
            }else if( line[i] == 'R' ){
                line[i] = line[i+1];
            }
        }
        cout << line << endl;
    }
    return 0;
}

