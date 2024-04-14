#include<iostream>
#include<string>
using namespace std;
class book{
	public:
		int bid;
		string bname;
		book(int id,string n){
		bid=id;
		bname=n;
		}	
		void display(){
			cout<<"Book Name : "<<bname<<endl<<"Book ID :"<<bid<<endl;	
		}		
};
int main(){
	book A(1,"Verity");
	book B(2,"Confess");
	A.display();
	B.display();
}
