#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.get();
    string sentence;
    int word_count, ck;
    while(T--){
        getline(cin, sentence);
        ck = 0;
        word_count = 0; ///
        for(int i=0; i<sentence.length(); i++){
            if( sentence[i] >= 'a' && sentence[i] <= 'z'  ){
                if(ck==0){
                    ck=1;
                }
            }else{
                if(ck==1){
                    word_count++;
                    ck=0;
                }
            }
            if( i == ( sentence.length() -1 ) && (sentence[i] >= 'a' && sentence[i] <= 'z' ) ){
                word_count++;
            }
        }
        cout << (word_count*420) << endl;
    }
    return 0;
}
