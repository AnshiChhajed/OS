#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector<int>myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);
	
	cout<<"element of the vector: ";
	for (int i = 0; i<myVector.size();++i) {
		cout<<myVector[i]<<" ";
	}
	cout<<endl;
	return 0;
}