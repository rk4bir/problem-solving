#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int sum;
    string word;
    while(T--){
        cin >> word;
        sum = 0;
        for(int i = 0; i < 3; i++){
            if( word[i] >= 'a' && word[i] <= 'z' ){
                sum += word[i] - 'a' + 97;
            }else if( word[i] >= 'A' && word[i] <= 'Z' ){
                sum += word[i] - 'A' + 65;
            }
        }
        cout << sum << endl;
    }
    return 0;
}


