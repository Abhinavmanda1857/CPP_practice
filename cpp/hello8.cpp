// #include <iostream>
// using namespace std;

// struct user
// {
// const int uid;
// const char*name;
// const char*email;
// int course_count;
// };

// int main(){
//     user mickey={ 001,"mickey","mickey@Gmail.com",2};//modern initializatoin in structure
//     user donald={ 002,"donald","donald@Gmail.com",3};
//     cout<<donald.email<<endl;
//     user *d=&donald;//for easiness
// //can overwrtite details
// donald.course_count=4;
// // donald.uid=003; cant change this though
// donald.email="ddonaldy@toon.com";//which isnt a good thing as we usually dont allow change of email
// cout<<donald.email<<endl;//but can change this as we are fixing the pointer that is pointing but not the value unlike in uid

// d ->course_count=12;//to change or access value of the pointer 
// cout<<donald.course_count<<endl;
    
//     return 0;
// }



//preprocessor and enums
// #include <iostream>
// using namespace std;
// enum MSOFFICE:uint8_t{//automatic increament kicks in enum//uint8_t to save some memory
// bold=5,
// italic,
// underline,
// crossed
// };
// int main(){
//     int myattributes=underline;
//     cout<<myattributes<<endl;
// }

//strong type challenge
#include <iostream>
#include <string>
using namespace std;
string api_call(){
    return "got some data from web";
}
int another(){
    return 5;
}
int main(){
    auto response=api_call();//so by using auto it doesnt matter what type of data type is used 
    auto rep=another();
    //auto is like template in a way
    cout<<response<<endl;
    if(typeid(response)==typeid(string)){//if true then response is of string type
        cout<<"both ids are same"<<endl;
    }
    //so auto itself is not a data type her, job of auto is to automatically define things and provides u with what type u need
}