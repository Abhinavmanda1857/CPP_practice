#include <iostream>
#include <string>

using namespace std;

template<typename T>
T getbigger(T a,T b){//for characters it takes ascii value
    return (a>b)?a:b;
}

int main(){
    cout<<getbigger('a','b')<<endl;

    return 0;
}


//stl
//functors in stl

#include <iostream>
#include <string>

using namespace std;

class myfloat{
float ft;
public:
myfloat(){
    ft=0.1;
}
void getvalue(){
    cout<<ft<<endl;
}
void operator ()(float v){
    ft+=v;
}

};

int main(){

myfloat floaty;
floaty.getvalue();
floaty(0.1);//we overloaded () to add
floaty.getvalue();

    return 0;
}