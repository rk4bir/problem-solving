#include <iostream>
using namespace std;

int leapYear(int x);
int day_in_month[12] = {31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30, 30};

int main()
{
    int T, t_dd, t_mm, t_yyy, counter;
    cin >> t_yyy >> t_mm >> t_dd;
    cin >> T;
    int dd, mm, yyyy, total_days, tmp;
    while(T--){
        cin >> yyyy >> mm >> dd;
        total_days = 0;
        tmp = 0;
        /// first part
        if( leapYear(yyyy) == 1 ){
            day_in_month[10] = 31;
            for( int p1=0; p1<(mm-1); p1++ ){
                tmp += day_in_month[p1];
            }
            tmp += dd;
            total_days = 366 - tmp;
            day_in_month[10] = 30;
        }else{
            for( int p1=0; p1<(mm-1); p1++ ){
                tmp += day_in_month[p1];
            }
            tmp += dd;
            total_days = 365 - tmp;
        }
        /// second part
        for(int p2=(yyyy+1); p2<t_yyy; p2++){
            if( leapYear(p2) == 1 ){
                total_days += 366;
            }else{
                total_days += 365;
            }
        }
        /// third part
        if( leapYear(t_yyy) == 1 ){
            day_in_month[10] = 31;
            for(int p3=0; p3<(t_mm-1); p3++){
                total_days += day_in_month[p3];
            }
            total_days += t_dd;
            day_in_month[10] = 30;
        }else{
            for(int p3=0; p3<(t_mm-1); p3++){
                total_days += day_in_month[p3];
            }
            total_days += t_dd;
        }
        cout << total_days << endl;
    }
    return 0;
}

int leapYear(int x){
    if( (x%4 == 0 && x%100 != 0) || x%400 == 0 ){
        return 1;
    }else{
        return 0;
    }
}

