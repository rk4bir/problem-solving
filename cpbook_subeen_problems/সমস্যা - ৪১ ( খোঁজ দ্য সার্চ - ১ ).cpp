#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int pos;
    string line, subline;
    for(int i=1; i<=T; i++){
        cin >> line >> subline;
        pos = line.find(subline);
        cout << pos << endl;
    }
    return 0;
}

