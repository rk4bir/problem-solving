#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int findLarge(int arr[], int len);
int findSmall(int arr[], int len);

int main()
{
    int T, i, j, caseNo;
    cin >> T;
    caseNo = 1;
    int volume[100];
    string names[100], name;
    int n, l, w, h, large, small, l_pos, s_pos;
    while(T--){
        cin >> n;
        for(i=0; i<n; i++){
            cin >> name >> l >> w >> h;
            names[i] = name;
            volume[i] = l*w*h;
        }
/// find large value & position
        large = findLarge(volume, n);
/// find large value & position
        small = findSmall(volume, n);
/// find names
        for(i=0; i<n; i++){
            if(large == volume[i]){
                l_pos = i;
            }else if(small == volume[i]){
                s_pos = i;
            }
        }
        if(large > small){
            cout << "Case " << caseNo << ": " << names[l_pos] << " took chocolate from " << names[s_pos] << endl;
        }else{
            cout << "Case " << caseNo << ": no thief" << endl;
        }
        caseNo++;
    }
    return 0;
}

int findLarge(int arr[], int len){
    int tmp[len], i;
    for(i=0; i<len; i++){
        tmp[i] = arr[i];
    }
    for(i=1; i<len; i++){
        if(tmp[0] < tmp[i]){
            tmp[0] = tmp[i];
        }
    }
    return tmp[0];
}

int findSmall(int arr[], int len){
    int tmp[len], i;
    for(i=0; i<len; i++){
        tmp[i] = arr[i];
    }
    for(i=1; i<len; i++){
        if(tmp[0] > tmp[i]){
            tmp[0] = tmp[i];
        }
    }
    return tmp[0];
}
