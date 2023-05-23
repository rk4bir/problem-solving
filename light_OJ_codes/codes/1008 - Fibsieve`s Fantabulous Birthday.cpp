#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   long long int n, h, a, tn, tc;
   cin >> tn;
   tc = 1;
   while(tn--){
       cin>>n;
       h = ceil(sqrt(n));
       a = n-(h-1)*(h-1);
       if(h%2==0){
           if(a>h){
                cout << "Case " << tc << ": " <<  h << " " << (1+h*h-n) << endl;
           }else{
               cout << "Case " << tc << ": " <<  a << " " << h << endl;
           }
       }else{
           if(a>h){
                cout << "Case " << tc << ": " <<  (1+h*h-n) << " " << h << endl;
           }else{
               cout << "Case " << tc << ": " <<  h << " " << a << endl;
           }
       }
       tc++;
    }
    return 0;
}
