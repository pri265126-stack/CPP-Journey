#include <iostream>
using namespace std;

class Box {
public:
    int* length; 
    
    Box(int len) {
        length = new int(len); 
    }

    
    Box(const Box &source) {
        length = new int;          
        *length = *(source.length); 
        cout << "[Copy Constructor: Successfully !]" << endl;
    }

    
    void setLength(int len) {
        *length = len; 
    }

    
    void display() {
        cout << "Value: " << *length << " | Memory Address: " << length << endl;
    }

    
    ~Box() {
        delete length;
    }
};

int main() {
    
    Box b1(10); 
    
    Box b2(b1); 

    cout << "\n--- Before Change ---" << endl;
    cout << "b1 -> "; b1.display();
    cout << "b2 -> "; b2.display();

    
    b2.setLength(50);

    cout << "\n--- After Changing b2's Length ---" << endl;
    cout << "b1 -> "; b1.display(); 
    cout << "b2 -> "; b2.display(); 
    

    return 0;
}
