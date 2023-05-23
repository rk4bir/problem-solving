#include <iostream>
using namespace std;

void print_number_eng(int n);

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b) swap(a,b);
    for(int n=a; n<=b; n++){
        if( n >= 1 && n <= 9){
          print_number_eng(n);
        }
        if(n > 9){
            if( n%2 ==0 ){
                cout << "even" << endl;
            }else{
                cout << "odd" << endl;
            }
        }
    }
    return 0;
}



void print_number_eng(int n){
  switch (n){
    case 1:
        cout << "one" << endl;
        break;
    case 2:
        cout << "two" << endl;
        break;
    case 3:
        cout << "three" << endl;
        break;
    case 4:
        cout << "four" << endl;
        break;
    case 5:
        cout << "five" << endl;
        break;
    case 6:
        cout << "six" << endl;
        break;
    case 7:
        cout << "seven" << endl;
        break;
    case 8:
        cout << "eight" << endl;
        break;
    case 9:
        cout << "nine" << endl;
        break;
    default:
        break;
    }
}

