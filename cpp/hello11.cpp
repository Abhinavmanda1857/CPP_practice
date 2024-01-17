// #include <iostream>
// using namespace std;
// int main(){
//      int life=2;
//      int points=4;
//      int score=2;
//      score+=points;
//      if(life !=5){
//         puts("into if block");

//      }

//     return 0;
// }




// //logical operators
// #include <iostream>
// using namespace std;
// int main(){
//  bool isfbuser=true;
//  bool isgoogleuser=true;//bool only takes two values true and false
//  bool isadmin=true;
//  if ((isgoogleuser || isfbuser) && isadmin)//and or operators
//  {
//     puts("welcome admin");
//  }else
//  puts("no admin aceess");

//  if (isfbuser || isgoogleuser)
//  {
//     puts("welcome useer");
//  }
 
// }

//bitwise operations
// #include <iostream>
// using namespace std;
// int main(){
//      unsigned int x=6;
//      unsigned int y=9;
//      unsigned int z= x & y;
//      cout<<"value of z is: "<<z<<endl; 
//     return 0;
// }\


//memory leak
// #include <iostream>
// using namespace std;
// int main(){
//     int *myp;
//    try{ myp=new int[100];//initislized a pointer myp that is referencing to arrsy that is holding 100 items
// cout<<"memory space allocated \n";
//    }catch(...){
//     cout<<"failed kn allocating memory\n";
//    }
// delete [] myp;//for deleting arrray of no assigned
// }



// #include <iostream>
// // #define NULL 0
// using namespace std;
// void printval(int a){
//    printf("integer value is %d\n",a);
// }
// void printval(double a){
//    printf("double value is %f\n",a);
// }
// void printval(int *a){//but while pointer it can become problem when using null
//    printf("pointer value is %p\n",a);
// }

// int main(){
//     printval(nullptr);//solves it as points to real null
//    return 0;
// }



//recursion
// #include <iostream>
// using namespace std;
// int factorial(int n);
// int main(){
//    //factorial: 5*4*3*2*1
//    //fatcorial: 1*2*3*4*5
// int n;
// cout<<"enter a value:"<<endl;
// cin>>n;
// cout<<"ur result:"<<factorial(n)<<endl;

//    return 0;
// }
// int factorial(int n){//this is used after main but still can be used if we define this function beforehand
//    if (n>1)
//    {
//       return n * factorial(n-1);
//    }else{
//       return 1;
//    }
   
// }


//macros
// #include <iostream>
// #include <string>

// #define end ;return 0 //defining macro
// #define ENDMESSAGE ;cout<<"program ends here\n"//gets a message everytime this is used
// using namespace std;
// int main(){
//    int a=4;
//    cout<<a
//    ENDMESSAGE;
//    end;
// }


//vardiac template and recurssion
#include <iostream>
#include <string>
using namespace std;

template <typename T>
void func(T t){//exit strategy as to when only one element is left
   cout<<"one func"<<t<<endl;
}
template <typename T,typename... Args>//syntax to use variadic
void func(T t,Args... args){//what is happening is 1 be printed as rest is considered as list stored in args
   cout<<"two func"<<t<<endl;
   func(args...);
}
int main(){
   string Myname="hitesh";
   func(1);
   func(1,2,3.4,4.5,Myname,1);
   return 0;
}