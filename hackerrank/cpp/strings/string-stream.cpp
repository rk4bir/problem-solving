#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> parseInts(string str);

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

vector<int> parseInts(string str) {
  string tmp = "";
  vector<int> num;
  for (int i = 0; i < str.length(); i++) {
    tmp += str[i];
    if (str[i] == ',' || str.length() - 1 == i) {
      num.push_back(stoi(tmp));
      tmp = "";
    }
  }
  return num;
}
