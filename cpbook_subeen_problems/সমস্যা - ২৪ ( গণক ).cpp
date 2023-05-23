
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int durationFind(int arr1[], int arr2[]);

int main()
{
    int T;
    cin >> T;
    int starting[3], ending[3], step_size;
    while(T--){
        cin >> starting[0] >> starting[1] >> starting[2];
        cin >> ending[0] >> ending[1] >> ending[2];
        cin >> step_size;
        cout << durationFind(starting, ending) * step_size << endl;
    }
    return 0;
}


int durationFind(int arr1[], int arr2[]){
    int h_init = arr1[0], h_final = arr2[0];
    if( h_init > 12 ){
        h_init = h_init % 12;
    }
    if( h_final > 12 ){
        h_final = h_final % 12;
    }
    if( h_init > h_final ){
        h_final += 12;
    }
    int t_initial = (h_init*3600 ) + ( arr1[1]*60 ) + arr1[2];
    int t_final   = (h_final*3600) + ( arr2[1]*60 ) + arr2[2];
    return (t_final - t_initial);
}
