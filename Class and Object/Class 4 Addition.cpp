#include<iostream>
using namespace std;
class add
{
	public:
		int a;
		int b;
		void get();
		void sum();
		};
	void add::get(){
		cout<<"Enter Numbers :::";
		cin>>a>>b;
	}
		void add::sum(){
			cout<<"The sum is "<<a+b;
		}
int main(){
	add x;
	x.get();
	x.sum();
	return 0;
}

