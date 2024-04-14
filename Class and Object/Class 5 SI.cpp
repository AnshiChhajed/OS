#include<iostream>
using namespace std;
class SI{
	int P,R,T;
	public:
		void get(){
			cout<<"Enter Principle value: ";
			cin>>P;
			cout<<"Enter Rate: ";
			cin>>R;
			cout<<"Enter Time: ";
			cin>>T;
	}
	void si(){
		cout<<"Simple Intrest : "<<(P*R*T)/100;
	}
};
int main(){
	SI x;
	x.get();
	x.si();
}
