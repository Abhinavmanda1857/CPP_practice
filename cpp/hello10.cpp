// //templates
// #include <iostream>
// using namespace std;
// void lifeup(int &abc){
//     ++(abc);
// }
// template <typename T>//created our own data type t that holds whatever data type is used
// T addme(T a, T b){//replacced usual int with our data type T
//     return a+b;
// }

// int main(){
//     int life=3;
//     lifeup(life);
//     cout<<life<<endl;
//     int v1=3;
//     int v2=4;
//     float v3=2.6;
//     float v4=5.5;
//     cout<<addme(v3,v4)<<endl;//c++ smart enough to know which functtion to use
//     return 0;
// }

//function pointer
#include <iostream>
using namespace std;
int gettwo(){
    return 2;
}
void interesting(){
    puts("i am interesting");
}
int main(){
    int igot=gettwo();
    void (*pointstointeresting)()=interesting;//pointing to memory location of interesting
    cout<<igot;
    pointstointeresting();
    (*pointstointeresting)();//just another way of writing
    return 0;
}