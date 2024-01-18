// #include <iostream>
// #include <string>
// using namespace std;

// class phone{
// string _name="";
// string _os="";
// int _price=0;

// public:
// phone();//default constructor
// phone(const string & name, const string & os,const int & price);//parameterized constructor
// phone(const phone &);//copy constructor
// string getname(){return _os;}
// int getprice();
// ~phone();//destructor called

// };

// int phone::getprice(){
// printf("value of getprice is %p\n",this);
// return _price;
// }

// phone::phone():_name(),_os("andy"),_price(){
//     puts("default constructor is called");
// }
// phone::phone(const string & name, const string & os,const int & price):_name(name),_os(os),_price(price){
//     puts("parameter constrrcutpr called");
// }
// phone::phone(const phone &value){
//     puts("overwrite copy constructor");
//     _name=value._name;
//     _os="skinned" + value._os;
//     _price=value._price;

// };
// phone::~phone(){
//     printf("destructor called for %s\n",_name.c_str());
// }

// int main(){
// phone samsungA1;
// cout<<samsungA1.getname()<<endl;

// phone oneplus8("op8","android",799);
// cout<<oneplus8.getname()<<endl;

// printf("value of object is %p\n",&oneplus8);
// cout<<oneplus8.getprice()<<endl;

// phone oneplus8s=oneplus8;
// cout<<oneplus8s.getname()<<endl;

// return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// class Rectangle{
// double _length;
// double _breadth;
// public:
// Rectangle(double l=2.0,double b=2.0)
// {
//     _length=l;
//     _breadth=b;
// }
// double area()
// {
//     return _length * _breadth;
// }
// int compare(Rectangle rectangle){
//     return this->area()>rectangle.area();//using this keyword so that u can refer itself, which is what h1 needs to do 
// }
// };
// //this is used when u want to self reference
// int main(){
//     Rectangle h1(3.0,3.0);
//     Rectangle h2(4.0,4.0);

//     cout<<h1.compare(h2)<<endl;

//     if(h1.compare(h2)){
//         cout<<"h2 is smaller";
//     }else{
//         cout<<"h2 is bigger";
//     }

//     return 0;

// }

//inheritance
#include <iostream>
#include <string>
using namespace std;

class Man{
string _name;
int _age;
Man(){};
protected://used so that only derived class can access it
Man(const string & name,const int & age):_name(name),_age(age){};
void run(){
    puts("i can run");
}
public:
void sayname()const;
};
void Man::sayname() const{
    cout<<"my name is:"<<_name<<" my age is: "<<_age<<endl;
}
//superman
class superman:public Man{
bool flight;
public:
superman(string name):Man(name,26){};
void run(){
    puts("i can run at light speed");
}
};

//spiderman
class spiderman:public Man{
bool webbing;
public:
spiderman(string name):Man(name,19){};
void run(){
    puts("i can run at normal speed");
}
};


int main(){
superman clark("kent");
clark.sayname();
clark.run();

spiderman peter("peter");
peter.sayname();
peter.run();
    return 0;
}

