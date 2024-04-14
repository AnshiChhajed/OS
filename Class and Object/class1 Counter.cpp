#include <iostream>
using namespace std;

class Counter {
public:
    int count;
    Counter() : count(0) {}

    void increment() {
        count++;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    c.increment();
    c.display();
    return 0;
}
