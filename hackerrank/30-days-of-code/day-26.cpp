#include <iostream>
using namespace std;

int rd, rm, ry;
int ed, em, ey;

int fine(){
    if( ry<ey || (ry==ey && rm<em) || (rd<=ed && rm==em) ) return 0;
    if( rd>ed && rm==em && ry==ey ) return 15*(rd-ed);
    if ( rd>ed && rm>em && ry==ey ) return  500*(rm-em);
    if ( ry>ey ) return 10000;
    return 0;
}


int main() {
    cin >> rd >> rm >> ry;
    cin >> ed >> em >> ey;
    cout << fine() << endl;
    return 0;
}

