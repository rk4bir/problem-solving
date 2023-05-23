#include <iostream>
#include <stack>
#include <string>
#include <cmath>
#include <cstdio>
using namespace std;


int main()
{

    for(int i=999; i>=0; i--){
        cout << i+1 << "\t";
        if( i%5 == 0 ){
            cout << endl;
        }
    }
    return 0;
}

