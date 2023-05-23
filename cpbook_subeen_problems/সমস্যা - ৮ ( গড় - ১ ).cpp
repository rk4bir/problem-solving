#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int num, sum;
    float avg;
    while(T--){
        sum = 0;
        for(int i=0; i<5; i++){
            cin >> num;
            sum += num;
        }
        avg = sum / 5.0;
        cout << avg << endl;
    }
    return 0;
}

