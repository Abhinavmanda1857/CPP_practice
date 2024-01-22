//lambda
// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//     []{cout<<"hello learn code online\n";}();

//     auto sum=[](auto a, auto b){return a+b;};//defined a generalized lambda
//     cout<<"sum of 2 and 5 is: "<<sum(2,5)<<endl;//so sum has becom e a functon using lambda while defining it in main
//     cout<<"sum of 2.5 and 5.6 is: "<<sum(2.5,5.6)<<endl;

//     string a="abc";
//     string b="def";
//     cout<<sum(a,b)<<endl;

//     return 0;
// }


//files

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){
//    static const char * originalfile="originalfile.txt";
//    static const char * editedfile="editedfile.txt";

// //    rename(originalfile,editedfile); 
//       remove(editedfile);


// //    FILE * fh=fopen(originalfile,"w");
// //    fclose(fh); 

//    return 0;
// }


#include <iostream>
#include <string>
constexpr int maxbuffer=1024;

using namespace std;

int main(){
    const char * filename="thisfile.txt";
    const char * information="lorem ipsum dolor sit amet";
    //write file
    // FILE * fh=fopen(filename,"a");

    // for(int i=0;i<50;++i){
    //     fputs(information,fh);
    // }
    // fclose(fh);

//reading file
    char buf[maxbuffer];
    FILE *fh=fopen(filename,"r");
    while(fgets(buf,maxbuffer,fh))
    {
      fputs(buf,stdout);
    }
    fclose(fh);

    return 0;
}