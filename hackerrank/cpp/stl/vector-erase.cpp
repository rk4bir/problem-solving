#include <vector>
#include <iostream>
using namespace std;

vector<int> v;

void print(){
    for(int i=0; i<v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

void remove(int p1, int p2=-1){
    if ( p2 == -1 ){
        if (p1 < v.size()) v.erase(v.begin()+p1);
    }else{
        if ( p2 > v.size() ) p2 = v.size();
        v.erase(v.begin()+p1, v.begin()+p2);
        cout << v.size() << endl;
    }
}


int main() {
    long int n, x, a, b, tmp;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    cin >> x;
    remove(x-1);
    cin >> a >> b;
    remove(a-1, b-1);
    print();
    return 0;
}

