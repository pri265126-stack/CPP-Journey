#include <iostream>
using namespace std;

class mobile {
public:
    string modelname;
    int ram;
    int price;
    mobile (){
        cout<<"default constructor "<<endl;
        modelname="unknown";
        ram=0;
        price=0;

    }
    mobile ( string modelname , int ram ,int price){
        this->modelname=modelname;
        this->ram=ram;
        this->price=price;

    }
    void display(){
        cout << "Model: " << modelname << ", RAM: " << ram << ", Price: " << price << endl; }
     };
int main() {
    
    mobile m1; 
    m1.display(); 

    cout << endl; 

    
    mobile m2("iPhone 15", 8, 80000); 
    m2.display(); 

    return 0;
}
