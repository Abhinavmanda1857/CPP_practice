#include <iostream>
using namespace std;
int main(){
    int integer_array[4]={1,2,3,4};//intitalize array
    cout<<integer_array[0]<<endl;//to get specific value in array

    int another_array[4];
    another_array[0]=7;
    another_array[1]=17;//anotehr way of intializing
    cout<<another_array[2]<<endl;//so default value 0 is filled

    *another_array=10;//so this points to first location of array and changes its value of 10
    cout<<another_array[0]<<endl;
    cout<<another_array[1]<<endl;

    int *ap=another_array;//array pointer pointing towards first position of array it is pointing to
    //since array is assignable by pointer so array is indeed continuous memorry locations
    ap++;//jump to next position i.e.,second poistion 
    *ap=209;//cahng
    cout<<another_array[1]<<endl;

    return 0;
}

//intgers

#include <iostream>
using namespace std;
int main(){
    printf("size of this data type is %ld\n",sizeof(int));
}