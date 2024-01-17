// #include <iostream>
// #include <string>
// using namespace std;
// class user{
//     int _secret=22;//private by default use _ just for anotation
//     public:
//     string name="default";
//     void classmessage();//only declaring here while its implementation is outside of class
//     //now to access the private memeber
//     void setsecret(const int & newsecret){//const as protection ;ayer
//      _secret=newsecret;
//     }
//     int getsecret()const;
// };
// void user::classmessage(){
//      cout<<"class is great,"<<name<<endl;
// }
// int user::getsecret()const{
//     return _secret;
// }

// int main(){
//     user sam;
//     sam.name="Sam";
//     sam.classmessage();
//     sam.setsecret(333);
//     cout<<sam.getsecret()<<endl;

//     user hitesh;//output shows sam and hitesh are completely independent objects
//     hitesh.classmessage();
//     hitesh.name="hitesh";
//     hitesh.classmessage();

//     const user rock;//declaring constant object
//     cout<<rock.getsecret()<<endl;//but to access using const object we do
    
//     user peter=sam;
//     cout<<peter.getsecret(); 

//     return 0;
// } //so non constant object can access constant method but constant object cannot access non constant method


//constructor and destructors

#include <iostream>
#include <string>
using namespace std;

class phone{
string _name="";
string _os="";
int _price=0;

public:
phone();//default constructor
phone(const string & name, const string & os,const int & price);//parameterized constructor
phone(const phone &);//copy constructor
string getname(){return _os;}
~phone();//destructor called

};

phone::phone():_name(),_os("andy"),_price(){
    puts("default constructor is called");
}
phone::phone(const string & name, const string & os,const int & price):_name(name),_os(os),_price(price){
    puts("parameter constrrcutpr called");
}
phone::phone(const phone &value){
    puts("overwrite copy constructor");
    _name=value._name;
    _os="skinned" + value._os;
    _price=value._price;

};
phone::~phone(){
    printf("destructor called for %s\n",_name.c_str());
}

int main(){
phone samsungA1;
cout<<samsungA1.getname()<<endl;

phone oneplus8("op8","android",799);
cout<<oneplus8.getname()<<endl;

phone oneplus8s=oneplus8;
cout<<oneplus8s.getname()<<endl;

return 0;
}