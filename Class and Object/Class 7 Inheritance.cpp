#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog loves to walk." << endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat(); 
    myDog.bark();
    return 0;
}

