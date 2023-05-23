#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;


int main()
{
    int T;
    cin >> T;
    double quantity;
    int counter;
    for(int i=1; i<=T; i++){
        cin >> quantity;
        counter = 0;
        while(1){
            if( quantity < 1 ) break;
            quantity /= 2;
            counter++;
        }
        cout << counter << " days" << endl;
    }
    return 0;
}

