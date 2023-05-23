#include <iostream>
#include <stack>
#include <string>
using namespace std;
int primeOrNot(int y);

int main()
{
    int T;
    int N, divisor[100], col, freq[100], f_col, tmp;
    while(cin >> N && N >= 2){
        if( primeOrNot(N) == true ){
            cout << N << " = " << N << "^1" << endl;
        }else{
            col = 0;
            f_col = -1;
            tmp = 0;
            for(int i=0; i<100; i++) freq[i]=1;
            cout << N << " = ";
            for(int i=2; i<=N; ){
                if(N==1) break;

                if( primeOrNot(i) == true ){
                    if( N%i == 0 ){
                        if( tmp == i ){
                            freq[f_col]++;
                        }else{
                            f_col++;
                            divisor[col] = i;
                            col++;
                        }
                        tmp = i;
                        N /= i;
                        continue;
                    }else{
                        i++;
                    }
                }else{
                    i++;
                }
            }
            /// printing out the result
            for(int i=0; i<col; i++){
                if( i == (col-1) ){
                    cout << divisor[i] << "^" << freq[i];
                }else{
                    cout << divisor[i] << "^" << freq[i] << " * ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}

/// if prime it returns true else, false
int primeOrNot(int y){
    bool ck = true;
    if(y < 2){
        return false;
    }else{
        for(int i=2; i<y; i++){
            if( y%i == 0 ){
                return false;
            }
        }
    }
    return ck;
}
