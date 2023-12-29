// #include <iostream>
// using namespace std;
// int main(){
//     int card=40;
//     int my_card=card;
    
//     int *myp;//pointer initialize
//     myp=&card;//point to memmory location of card

//     my_card=*myp;//pointer deref. 
//     printf("value of my_card is %d:",my_card);
//     printf("value of myp is %p:",myp);

// }

#include <iostream>
using namespace std;
int main(){
    int score=200;
    int *myp=&score;
    printf("score is %d",score);
    printf("value of pointer is %p",myp);
    //references
    int &another_score=score;//references value thats is stored, can change values
    another_score=800;//changes scores value to 800 too as we already referenced it
    printf("score is %d",score);
    printf("value of pointer is %p",myp);

}