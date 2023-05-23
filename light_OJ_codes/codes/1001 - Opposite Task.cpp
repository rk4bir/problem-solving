#include <iostream>
using namespace std;

int main()
{
    int tcase, i, j;
    cin >> tcase;
    int n, n1, n2;
    while(tcase--){
        cin >> n;
        if(n <= 10){
            n1 = 0;
            n2 = n;
        }else if(n>10){
            n1 = n-10;
            n2 = n-n1;
        }
        cout << n1 << " " << n2 << endl;
    }
    return 0;
}
