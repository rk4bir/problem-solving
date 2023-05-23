#include <iostream>
#include <string>
using namespace std;
long long factorial(int x);

int main()
{
    int T;
    cin >> T;
    cin.get();
    string line, line_arr[20], tmp;
    int word_count, sameWord[20], l, arr_len, k, i, p;
    long long probability, minimizer;
    while(T--){
        getline(cin, line);
        word_count = 1;
        /// finding numbers of words
        for(k=0; k<line.length(); k++){
            if( line[k] == ' ' ){
                if( k != (line.length()-1) ){
                    word_count += 1;
                }
            }
        }
        /// making array of words
        tmp = "";
        arr_len=0;
        for(k=0; k<line.length(); k++){
            if( line[k] == ' ' ){
                line_arr[arr_len] = tmp;
                arr_len++;
                tmp = "";
                continue;
            }else{
                tmp += line[k];
            }
        }
        line_arr[arr_len] = tmp;
        /// initially putting 1 to string repeat checker
        for(k=0; k<10; k++){
            sameWord[k] = 1;
        }
        /// calculating string/word repeats
        for(k=0; k<arr_len; k++){
            for(i=k+1; i<=arr_len; i++){
                if( (line_arr[k] == line_arr[i]) && (line_arr[i] != "505") ){
                    sameWord[k] += 1;
                    line_arr[i] = "505";
                }
            }
        }
        /// minimizer is the variable that helps to permute line accurately
        minimizer = 1;
        for(k=0; k<10; k++){
            minimizer *= factorial(sameWord[k]);
        }
        /// generating the result
        probability = factorial(word_count) / minimizer;
        /// printing out the result
        cout << "1/" << probability << endl;
    }
    return 0;
}

long long factorial(int x){
    long long p=1;
    if( x==0 || x==1 ){
        return 1;
    }else{
        for(int i=2; i<=x; i++){
            p *= i;
        }
        return p;
    }
}

