#include<iostream>
#include<cmath>
using namespace std;

int get_k(int k);
int get_trailed_zeros(int n, int k);

int main(){
	int t, n, zeros, k;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> n;
		k = get_k(n);
        zeros = get_trailed_zeros(n, k);
        cout << zeros << endl;
	}
}


int get_k(int n){
    int base = 5;
    return (int)(log(n) / log(base));
}


int get_trailed_zeros(int n, int k){
    int sum = 0;
    for(int i=1; i<=k; i++){
        sum += n / pow(5, i);
    }
    return sum;
}
