// #include <iostream>
// #include <string>
// using namespace std;

// class money{
//     public:
//     void gotmoney(){
//         puts("got 5 k usd");
//     }
// };

// class Man{
// string _name;
// int _age;
// Man(){};
// protected://used so that only derived class can access it
// Man(const string & name,const int & age):_name(name),_age(age){};
// void run(){
//     puts("i can run");
// }
// public:
// void sayname()const;
// };
// void Man::sayname() const{
//     cout<<"my name is:"<<_name<<" my age is: "<<_age<<endl;
// }
// //superman
// class superman:public Man{
// bool flight;
// public:
// superman(string name):Man(name,26){};
// void run(){
//     puts("i can run at light speed");
// }
// };

// //spiderman
// class spiderman:public Man,public money{//multiple inheritance
// bool webbing;
// public:
// spiderman(string name):Man(name,19){};
// void run(){
//     puts("i can run at normal speed");
// }
// };


// int main(){
// superman clark("kent");
// clark.sayname();
// clark.run();

// spiderman peter("peter");
// peter.sayname();
// peter.run();
// peter.gotmoney();
//     return 0;
// }


//polymorphism and virtual

// #include <iostream>
// #include <string>
// using namespace std;

// class one{
// public:
// void virtual intro(){//used virtual to remove ambuiguity seen below while using pointers
//     cout<<"i am one \n";
// }
// };

// class two:public one{
// public:
// void intro(){
//     cout<<"i am two \n";
// }
// };

// class three:public one{
// public:
// void intro(){
//     cout<<"i am three \n";
// }
// };
// //using pointers while polymorphism is very tricky
// int main(){
// one *a;
// two b;
// three c;

// a=&b;
// a->intro();

// a=&c;
// a->intro();
// //there is a ambuiguity while using pointers that both gives output of "i am one" which isnt what we want, so to solve this we use virtual keyword 
// return 0;
// }


//smart pointers
//a. unique pointers

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class user{
    public:

user(){
    cout<<"user created \n";
}
~user(){
    cout<<"user destoryed \n";
}
void testfunc(){
    cout<<"i am a test function \n";
}
};

int main(){
{
    // unique_ptr<user> sam(new user());//non fav. way for developers
    unique_ptr<user> sam= make_unique<user>();//without use of new delete did this
    sam->testfunc();
//cannot coopy this unique pointer
}
cout<<"outside code\n";
return 0;
}