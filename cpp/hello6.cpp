// #include <iostream>
// using namespace std;
// int main(){
//     int my_num[]={2,3,4,5,6};
//     for(int i=0;i<5;i++){//first compiler initializes values of temporary variable just once, then checks the condition and then instead of increamenting it, the program jumps to the body of for loop and execute your statemtn and then move back to increament 
//         cout<<my_num[i]<<endl;
//     }
 

//     cout<<"take a break"<<endl;
//     for(int i:my_num){//does lot of things in backend only like increament
//         cout<<i<<endl;
//     }
// }


// #include <iostream>
// using namespace std;
// int main(){
//     char my_string[]="hitesh";//ends with 0 but we dont see
//     char my_name[]={'h','i','t','e','s','h','0'};//every string actually ends with 0 even the one above where we dont see it directly
//     printf("my name is %s\n",my_name);
//     cout<<"take a break"<<endl;
//     // for(int i=0;my_name[i]!=0;i++){// as ends with 0 so terminate before that
//     //     cout<<"character is: "<<my_name[i]<<endl;
//     // }
//     for(int i=0;my_name[i];i++){//this also works as once gets zero value then stopos executing as counts it as false
//          cout<<"character is: "<<my_name[i]<<endl;
//      }
//      cout<<"take another break"<<endl;
//      //using character pointer to iterate
//     for(char *cp=my_name;*cp!=0;cp++){//this first points cp to first postion of array as we have discussed before
//      cout<<"character is: "<<*cp<<endl;//here we derefernced to get value as discussed
//     } 
// }




// #include<iostream>
// using namespace std;
// int main(){
//     printf("float size is %ld",sizeof(float))
//     return 0;
// }
