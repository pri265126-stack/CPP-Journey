#include <iostream>
using namespace std;
class phone{
    protected:
    string IMEI="3456767637368";
    public:
    string brand="Apple";
     void makecall(){
        cout<<"calling"<<endl;
     }
};
class smartphone: public phone{
    public :
 void   browseinternet(){
    cout<<brand<<"internet is working"<<endl;}
    void showsecretdetails() {
        cout<<"security check-IMEI number"<<IMEI<<endl;
    }

    };
    int main(){
    smartphone myphone;
    cout<<"brand"<<myphone.brand<<endl;
    
    myphone.makecall();
    myphone.browseinternet();
    myphone.showsecretdetails();
    return 0;
}
