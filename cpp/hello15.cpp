// #include <iostream>
// #include <string>
// #include <memory>

// using namespace std;

// class user{
//     public:

// user(){
//     cout<<"user created \n";
// }
// ~user(){
//     cout<<"user destoryed \n";
// }
// void testfunc(){
//     cout<<"i am a test function \n";
// }
// };

// int main(){
// {
//     // unique_ptr<user> sam(new user());//non fav. way for developers
//     unique_ptr<user> sam= make_unique<user>();//without use of new delete did this
//     sam->testfunc();
// //cannot coopy this unique pointer
// }

// {
//     //shared pointers
//     // shared_ptr<user> am(new user());//this is not a good idea as u r using heap memory too which is unecessary
//     shared_ptr<user> tim=make_shared<user>();
//     weak_ptr<user> wtim=tim;//weak pointer used to take in account of this pointer ignored by others 
//     shared_ptr<user> timmm=tim;//here coopying is allowed
// }

// cout<<"outside code\n";
// return 0;
// }



// #include <iostream>
// #include <string>

// using namespace std;

// void swap(int &a, int &b){//to solve problem of creating extra memory with temp due to copying we instead just move it
//     int tmp=move(a);//moved a into temp so now a is empty
//     a=move(b);
//     b=move(tmp);//copying keeps two referecnse of same entity, while moving only moves it so keeps one so less memory taken
// }

// string printme(){
//     return "i am print";
// }

// int main(){
// int a=3;
// int b=4;

// swap(a,b);

// cout<<"A:"<<a<<endl;

// string s=printme();//copying reference of print me in inside s
// string&& ss=printme();//but here its not copyuing but directly referencing to body of print me()

// return 0;
// }



//vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct corners{
float a,b,c,d;

};
//operator overloading
ostream& operator<<(ostream& stream,const corners & corn){
    stream << corn.a<<" "<<corn.b<<" "<<corn.c<<" "<<corn.d;
    return stream;
}

int main(){
vector <int> inty;// noneed to give size here, also called array list
inty.push_back(2);//to enter data into the vectors
inty.push_back(3);
inty.push_back(4);
inty.push_back(5);

for(auto i=inty.begin();i!=inty.end();++i){//begin gives reference of very first location
     cout<<*i<<endl;//used a pointer here as it stores references
}

vector<corners> corn;
corn.push_back({1,2,3,4});
corn.push_back({5,6,7,8});

for(int i=0;i<corn.size();++i){
cout<<corn[i]<<endl;
}
    return 0;
}