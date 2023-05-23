#include <iostream>
#include <vector>
using namespace std;


vector<int> gen_ar(int n){
	vector<int> ar;
	for(int i=1; i<=n; i++) { ar.push_back(i); }
	return ar;
}


int get_output(vector<int> ar, int k) {
	vector<int> out;
	for(int i=0; i<ar.size(); ++i) {
		for(int j=i+1; j<ar.size(); ++j) {
			int and_ = ar[i]&ar[j];
			if ( (ar[i] < ar[j]) && (and_ < k) ) {
				out.push_back(ar[i]&ar[j]);
			}
		}
	}
	int tmp=0;
	int max[out.size()] = {0};
	for(int i=0; i<out.size(); ++i) {
		if ( tmp < out[i] ) tmp = out[i];
	}
	return tmp;
}

int main() {
	int n, k, a, b, t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		vector<int> ar = gen_ar(n);
		cout << get_output(ar, k) << endl;
	}
	return 0;
}
