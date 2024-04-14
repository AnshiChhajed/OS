#include<iostream>
using namespace std;
class area{
	int s,b,h,x,y;
	public:
		void getsq(){
			cout<<"Enter side length of square: ";
			cin>>s;
	}
		void arsq(){
			cout<<"Area of Square :"<<s*s<<endl;
	}
		void getr(){
				cout<<"Enter length and width of rectangle: ";
				cin>>b>>h;
	}
		void rec(){
			cout<<"Area of Rectangle : "<<b*h<<endl;
	}
		void gettri(){
				cout<<"Enter length of base : ";
				cin>>x;
				cout<<"Enter height of triangle :";
				cin>>y;
	}
		void tri(){
			cout<<"Area of Triangle : "<<(x*y)/2<<endl;
	}
};
int main(){
	area x;
	cout<<"Area of Square"<<endl;
	x.getsq();
	x.arsq();
	cout<<"Area of Rectangle"<<endl;
	x.getr();
	x.rec();
	cout<<"Area of Triangle"<<endl;
	x.gettri();
	x.tri();
	
}
