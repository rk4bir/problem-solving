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
    int score, target, ball_left, played_ball, need;
    float rr, cr;
    for(int i=1; i<=T; i++){
        cin >> target >> score >> ball_left;
        target += 1;
        played_ball = 300 - ball_left;
        need = target - score;
        cr = (score / float(played_ball)) * 6.0;
        rr = (need / float(ball_left)) * 6.0;
        printf("%.2f %.2f\n", cr, rr);
    }
    return 0;
}

