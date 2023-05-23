#include <iostream>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    long long num;
    int year, month, day, hour, minute, sec;
    double tmp;
    for(int i=1; i<=T; i++){
        tmp = 0;
        cin >> num;
        cout << "Case " << i << ":";
        tmp = num;
        year = tmp/31104000;
        if(year > 0){
            if( year == 1 ){
                cout << ' ' << year << " year";
            }else{
                cout << ' ' << year << " years";
            }
            tmp -= (31104000*year);
        }

        month = tmp/2592000;
        if( month > 0 ){
            if( month == 1 ){
                cout << ' ' << month << " month";
            }else{
                cout << ' ' << month << " months";
            }
            tmp -= (2592000*month);
        }

        day = tmp/86400;
        if( day > 0 ){
            if( day == 1 ){
                cout << ' ' << day << " day";
            }else{
                cout << ' ' << day << " days";
            }
            tmp -= (86400*day);
        }
        hour = tmp/3600;
        if( hour > 0 ){
            if( hour == 1 ){
                cout << ' ' << hour << " hour";
            }else{
                cout << ' ' << hour << " hours";
            }
            tmp -= (3600*hour);
        }
        minute = tmp/60;
        if( minute > 0 ){
            if( minute == 1 ){
                cout << ' ' << minute << " minute";
            }else{
                cout << ' ' << minute << " minutes";
            }
            tmp -= (60*minute);
        }
        sec = tmp;
        if( sec > 0 ){
            if( sec == 1 ){
                cout << ' ' << sec << " second";
            }else{
                cout << ' ' << sec << " seconds";
            }
        }
        cout << "\n";
    }
    return 0;
}

