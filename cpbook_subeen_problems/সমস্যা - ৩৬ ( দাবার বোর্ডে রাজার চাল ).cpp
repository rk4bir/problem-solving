#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int shortestpathFinder(int r1, int c1, int r2, int c2);

int main()
{
    int T;
    cin >> T;
    int r1, c1, r2, c2, steps;

    for(int i=1; i<=T; i++){
        cin >> r1 >> c1 >> r2 >> c2;
        steps = 0;
       /// when current position & target position is in same row
        if( r1 == r2 ){
        	steps = c2 - c1;
        	if( steps < 0 ){
        		steps += -1;
        	}
        	goto output;
        }
       /// when current position & target position is in same column
        if( c1 == c2 ){
			steps = r2 - r1;
        	if( steps < 0 ){
        		steps += -1;
        	}
        	goto output;
        }
       /// works for any cases;
        steps = shortestpathFinder(r1, c1, r2, c2);

    output:
        cout << "Case " << i << ": " << steps << endl;
    }
    return 0;
}







/// the shortest distance between two given point of King in chessboard finding function

int shortestpathFinder(int r1, int c1, int r2, int c2){
    string helper;
    int steps, row, col;
    steps = 0;
    if( r1 > r2 ){
        if( c1 > c2 ){
            helper = "upper_left";
        }else if( c2 > c1 ){
            helper = "upper_right";
        }
    }else if( r1 < r2 ){
        if( c1 > c2 ){
            helper = "lower_left";
        }else if( c2 > c1 ){
            helper = "lower_right";
        }
    }
    if( helper == "upper_left" ){
        row = r1;
        col = c1;
        while(1){
            row  -= 1;
            col -= 1;
            steps += 1;
            if( row == r2 && col == c2 ){
                break;
            }

            if( col == c2 ){
                steps += row - r2;
                break;
            }
            if( row == r2 ){
                steps += col - c2;
                break;
            }
        }
    }else if( helper == "upper_right" ){
        row = r1;
        col = c1;
        while(1){
            row  -= 1;
            col += 1;
            steps += 1;
            if( row == r2 && col == c2 ){
                break;
            }

            if( col == c2 ){
                steps += row - r2;
                break;
            }
            if( row == r2 ){
                steps += c2 - col;
                break;
            }
        }
    }else if( helper == "lower_left" ){
        row = r1;
        col = c1;
        while(1){
            row  += 1;
            col -= 1;
            steps += 1;
            if( row == r2 && col == c2 ){
                break;
            }

            if( col == c2 ){
                steps += r2 - row;
                break;
            }
            if( row == r2 ){
                steps += col - c2;
                break;
            }
        }
    }else if( helper == "lower_right" ){
        row = r1;
        col = c1;
        while(1){
            row  += 1;
            col += 1;
            steps += 1;
            if( row == r2 && col == c2 ){
                break;
            }

            if( col == c2 ){
                steps += r2 - row;
                break;
            }
            if( row == r2 ){
                steps += c2 - col;
                break;
            }
        }
    }
    return steps;
}
