#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> vec = {2, 4, 6, 8, 10};
    int Element = 6;
    int c=0;

    for (int i = 0; i < vec.size(); ++i) {
        if (vec[i] ==Element) {
            c++;
            break;
        }
    }

    if (c!=0) {
        cout << "Element found in the vector." << std::endl;
    } else {
        cout << "Element not found in the vector." << std::endl;
    }

    return 0;
}