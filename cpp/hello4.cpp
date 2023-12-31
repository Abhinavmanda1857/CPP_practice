#include <iostream>
using namespace std;
int main(){
    int rating=4;
    if(rating==5){
        puts("it is 5 star rated");
    }else if(rating==4){
        puts("rating is 4 stars");
    }
    else{
        puts("not 5 or 4 star rated");
    }
    if(1){//here any non zero value is treated as true while 0 and null and false are treated as true,, so for 1 it will always execute
        puts("go for it");//no need to put \n here as always skips a line in if else
    }

    //ternary condition
    printf("rating feedback is %s",rating>4 ? "good rating" : "bad rating");

    return 0;
}