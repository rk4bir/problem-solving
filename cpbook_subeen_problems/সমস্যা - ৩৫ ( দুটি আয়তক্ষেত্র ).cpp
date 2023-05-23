#include <iostream>
#include <stack>
#include <string>
using namespace std;
int x1, y1, x2, y2;
int x3, y3, x4, y4;
bool insideOrNot();
bool recheck();
int main()
{
    int T;
    cin >> T;

    for(int i=1; i<=T; i++){
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> x3 >> y3 >> x4 >> y4;
        cout << "Case " << i << ": ";
        if(insideOrNot() == true){
            cout  << "Yes" << endl;
        }else{
            if( recheck() == true ){
                cout << "Yes" << endl;
            }else{
                cout  << "No" << endl;
            }
        }
    }
    return 0;
}





bool insideOrNot(){
    int ck1=0, ck2=0, ck01=0, ck02=0;
    if( x3 > x1 && x3 < x2 ){
        ck1 = 1;
    }
    if( x4 > x1 && x4 < x2 ){
        ck2 = 1;
    }
    if( ck1 == 1 ){
        if( y4 > y1 && y4 < y2 ){
            ck02 = 1;
        }
        if( y3 > y1 && y3 < y2 ){
            if( ck02 == 1){
                ck02 = 2;
            }else{
                ck02 = 1;
            }
        }
    }
    if( ck2 == 1 ){
        if( y4 > y1 && y4 < y2 ){
            ck01 = 1;
        }
        if( y3 > y1 && y3 < y2 ){
            if( ck01 == 1){
                ck01 = 2;
            }else{
                ck01 = 1;
            }
        }
    }


    /// return
    if( ck01+ck02 > 0 ){
        return true;
    }else{
        return false;
    }
}



bool recheck(){
    int ck1=0, ck2=0, ck01=0, ck02=0;
    if( x1 > x3 && x1 < x4 ){
        ck1 = 1;
    }
    if( x2 > x3 && x2 < x4 ){
        ck2 = 1;
    }
    if( ck1 == 1 ){
        if( y2 > y3 && y2 < y4 ){
            ck02 = 1;
        }
        if( y1 > y3 && y1 < y4 ){
            if( ck02 == 1){
                ck02 = 2;
            }else{
                ck02 = 1;
            }
        }
    }
    if( ck2 == 1 ){
        if( y2 > y3 && y2 < y4 ){
            ck01 = 1;
        }
        if( y1 > y3 && y1 < y4 ){
            if( ck01 == 1){
                ck01 = 2;
            }else{
                ck01 = 1;
            }
        }
    }


    /// return
    if( ck01+ck02 > 0 ){
        return true;
    }else{
        return false;
    }
}

