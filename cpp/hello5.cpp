// #include <iostream>
// using namespace std;
// int main(){
//     int rating=3;
//     switch(rating){
//         case 1:
//          puts("rated as 1 star");
//          break;
//         case 2:
//          puts("rated as 2 star");
//          break;
//         case 3:
//          puts("rated as 3 star");
//          break;//here break is imp to move out of the loop if case if true, so without this break it will also print below statement of rated as 4 stars
//         case 4:
//          puts("rated as 4 star");
//          break;
//         case 5:
//          puts("rated as 5 star");
//          break;
//         default://if none matches then execute this statement
//         puts("plz rate our code bw 1 and 5 only");
//         break;
//     }
    
// }



// //while and do while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int my[]={4,5,6,7,8,9,0};
//     int i=0;
//     while(i<7){
//         if(i==3){
//             cout<<"special thing"<<endl;
//             break;//so after this we get out of while loop
//             //use continue keyword too which just skips this iteratioin so 7 wont be printed
//         }
//         cout<<"current no is:"<<my[i]<<endl;//we discussed how to access we use name[i], here i as i iterates
//     i=i+1;//remember to increaemnt or i++
//     }
//     cout<<"outisde th loop"<<endl;
// }
// //for continue
// #include <iostream>
// using namespace std;
// int main(){
//     int my[]={4,5,6,7,8,9,0};
//     int i=0;
//     while(i<7){
//         if(i==3){
//             cout<<"special thing"<<endl;
//             i++;//to avoide endless loop as 7 be skiped and move to i=4 which was avoided without it
//             //use continue keyword too which just skips this iteratioin so 7 wont be printed
//             continue;//so after this we get out of while loop
//             //use continue keyword too which just skips this iteratioin so 7 wont be printed
//         }
//         cout<<"current no is:"<<my[i]<<endl;//we discussed how to access we use name[i], here i as i iterates
//     i=i+1;//remember to increaemnt or i++
//     }
//     cout<<"outisde th loop"<<endl;
// }



//do while
// #include <iostream>
// using namespace std;
// int main(){
//     do{

//     }while(condition)//first execute and then check condition
// }