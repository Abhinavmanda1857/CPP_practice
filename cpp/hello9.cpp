// #include <iostream>

// struct user{
// const int id;
// int age;
// user():id(101),age(22){}
// };
// int main(){
//     using namespace std;
//     //stack
//     int score=100;

//     //heap
//     int *heap_score=new int;
//     *heap_score=200;
//     user *nike=new user();

//     delete heap_score;
//     delete nike;
// }


//functions
#include <iostream>
using namespace std;
void lifeup(int &abc){
    ++(abc);
}
int addme(int a,int b){
    return a+b;
}
float addme(float a,float b){
    return a+b;
}
int main(){
    int life=3;
    lifeup(life);
    cout<<life<<endl;
    int v1=3;
    int v2=4;
    float v3=2.6;
    float v4=5.5;
    cout<<addme(v3,v4)<<endl;//c++ smart enough to know which functtion to use
    return 0;
}