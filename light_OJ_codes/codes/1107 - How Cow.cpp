#include <iostream>
using namespace std;
int x1, x2, y1, y2;
void insideOrNot(int x, int y);

int main()
{
    int i, j, T, caseNo;
    cin >> T;
    int x[101], y[101], m;
    caseNo = 1;
    while(T--){
        cin >> x1 >> y1 >> x2 >> y2 >> m;
        for(i=0; i<m; i++){
            cin >> x[i] >> y[i];
        }
        cout << "Case " << caseNo << ":" << endl;
        for(i=0; i<m; i++){
            insideOrNot(x[i], y[i]);
        }

        //cout << "Case " << caseNo << ": " << radius << endl;
        caseNo++;

    }
    return 0;
}

void insideOrNot(int x, int y){
    int i, ck=0;
    for(i=x1+1; i<x2; i++){
        if(x == i){
            ck = 1;
            break;
        }
    }
    if(ck == 1){
        for(i=y1+1; i<y2; i++){
            if(y == i){
                ck = 2;
                break;
            }
        }
    }else{
        ck = 0;
    }
    if(ck == 2){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
