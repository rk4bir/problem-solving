#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    int h, w, l;
    int volume;
    while(T--){
        cin >> l >> w >> h;
        volume = l*w*h;
        cout << volume << endl;
    }
    return 0;
}


