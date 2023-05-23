#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int pos, counter;
    string line, subline;
    for(int i=1; i<=T; i++){
        cin >> line >> subline;
        counter = 0;
        while(1){
            pos = line.find(subline);
            if( pos == -1 ){
                break;
            }
            if( pos != -1 ){
                line[pos] = '-';
                counter+=1;
            }
        }
        cout << counter << endl;
    }
    return 0;
}
