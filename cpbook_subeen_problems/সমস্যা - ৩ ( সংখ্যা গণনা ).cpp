#include <iostream>
#include <string>
using namespace std;

int main()
{
    int T;
    cin >> T;
    string line;
    int start_num, counter;
    cin.get();  /// to ignore the new line character
    while(T--){
        getline(cin, line); /// taking the entire input as a string
        start_num = 0;
        counter = 0;
        for(int i = 0; i < line.length(); i++){
            if( line[i] != ' ' ){
                start_num = 1;
            }else if( line[i] == ' ' ){
                if( start_num == 1 ){
                    counter += 1;
                    start_num = 0;
                }
            }
        }
        cout << ++counter << endl;
    }


    return 0;
}

