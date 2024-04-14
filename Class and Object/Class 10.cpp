#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    int age;
    Student(string n, int a); 
    void displayInfo();
};
Student::Student(string n, int a) {
    name = n;
    age = a;
}
void Student::displayInfo() {
    cout << "Name: " << name << ", Age: " << age << endl;
}

int main() {
    Student s("Anshi", 20);
    s.displayInfo();
    return 0;
}

