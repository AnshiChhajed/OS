#include <iostream>
using namespace std;

class Car{
public:
    int price;
    int model_no;
    char name[20];
    
    void start(){
        cout<<"Starting the car "<<name<<endl;
    }
    
};
int main() {
    Car C;
    C.price =500; 
    C.start();
    cout<<"Price:"<<C.price<<endl;
    C.model_no = 1001;
    C.name[0] = 'B';
    C.name[1] = 'M';
    C.name[2] = 'W';
    C.name[3] = '\0';
    cout<<C.name<<endl;
    cout<<C.model_no<<endl;
    return 0; 
}
