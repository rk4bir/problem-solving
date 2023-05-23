#include<bits/stdc++.h>
using namespace std;


class Box {
	private:
    		long int l, b, h; // variables
   	public:
		// Overloaded constructors
		Box(int l = 0, int b = 0, int h = 0) { this->l = l, this->b = b, this->h = h; };
		Box(Box &obj) { this->l = obj.l, this->b = obj.b, this->h = obj.h; }
		
		// friend function: to access it from outsite class
		friend ostream &operator<<(ostream &out, Box &B) { return out << B.l << ' ' << B.b << ' ' << B.h; }	
		
		// returns length
		int getLength() { return l; };

		// returns breadth
		int getBreadth() { return b; };

		// returns height
		int getHeight() { return h; };

		// returns volume
		long long CalculateVolume() { return l * b * h; };

		// to perform < operator on Box class object
		bool operator<(Box &obj) {
  			bool ck1 = (this->l < obj.l) ? true : false;
  			bool ck2 = (this->b < obj.b && this->l == obj.l) ? true : false;
  			bool ck3 = (this->h < obj.h && this->b == obj.b && this->l == obj.l) ? true : false;
  			if(ck1 || ck2 || ck3) return true;
  			return false;
		}
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++){
		int type;
		cin>>type;
		if(type ==1) {
			cout<<temp<<endl;
		}
		if(type == 2){
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3){
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			(NewBox<temp) ? cout<<"Lesser\n" : cout<<"Greater\n";
		}
		if(type==4){ 
			cout<<temp.CalculateVolume()<<endl; 
		}
		if(type==5){
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}
	}
}


int main(){
	check2();
}
