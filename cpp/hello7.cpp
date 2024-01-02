// #include <iostream>
// using namespace std;
// int main(){
//     char call_api='h';
//     try{
//         cout<<"did some testing on api value\n";
//         throw call_api;
//         cout<<"no code exexuted after return and throw\n";//imp point

//     }catch(int x){
//         cout<<"integer exception handled\n";
//     }
//     catch(float y){
//         cout<<"float exception handled\n";
//     }
//     catch(...){//... used to say catch all in case u dont know what kind of error is thrown
//         cout<<"something went wrong\n";
//     }
//     cout<<"keep on moving with rest of code\n";
//     return 0;
// }



//functions
// #include <iostream>
// using namespace std;
// void sayhello(){
//         puts("hello there");//no need to put \n here as function already gets to next line
//             }
// void saystwo()
// {        puts("2");    }
// int saythree(){
//     return 3;//this wont print 3 when called as this just returns 3 not print it so to print it use print statemtn while calling
// }
// void sayfour(){
//     puts("4");
// }
    
// int main(){
//     sayhello();
//     saystwo();
//     cout<<saythree()<<endl;//or do printf("%d",saythree());//behind the scene what happens it it says 3 is its value which is then printed
//     sayfour();//here the difference in 3 and 4 is that 3 is an integer while 4 is a string so cant do algrabrae with 4  directly
//     return 0;
// }



//linkers qualifiers

#include <iostream>
using namespace std;
int lifeup(){
    static int life=3;//we use static here so it becomes in global state no matter where we are defining it so now life will become 5 when called twice 
    //return life++;//it first executes as 3 and then increases it so ++life makes more sense
    return ++life;//prefix operator

}
int main(){
    int life=3;
    cout<<"ur current life is:"<<life<<endl;
    life=lifeup();
    printf("ur update dlife is: %d\n",life);
    life=lifeup();
    printf("ur update dlife is: %d\n",life);//this doesnt increase life to 5 as the life again initializes to 3 as declared in scope of lifeup
    return 0;
}