#include <iostream>
using namespace std;

class Calculator {
public:
    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator cal;

    
    cout << "2 numbers ka sum: " << cal.add(10, 20) << endl;        // Output: 30
    cout << "3 numbers ka sum: " << cal.add(10, 20, 30) << endl;    // Output: 60
    cout << "Decimal numbers ka sum: " << cal.add(5.5, 4.5) << endl; // Output: 10

    return 0;
}
