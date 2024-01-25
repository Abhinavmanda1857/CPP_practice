// //sorting
// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main(){
//     float numbers[6]={3.3,2.5,6.3,4.7,7.4,9.8};//call it a iterator here
//     cout<<"unusorted values: "<<endl;

//     for(float n:numbers){
//         cout<<n<<" ";
//     }

//     sort(numbers,numbers+6);
//     // sort_heap(numbers,numbers+6);
 
//     cout<<"sorted values: "<<endl;

//     for(float n:numbers){
//         cout<<n<<" ";
//     }

//     return 0;
// }



//searching

// #include <iostream>
// #include <string>
// #include <algorithm>

// using namespace std;

// int main(){
//     int numbers[6]={3,2,6,4,7,9};//call it a iterator here
//     cout<<"unusorted values: "<<endl;

//     for(int n:numbers){
//         cout<<n<<" ";
//     }

//     sort(numbers,numbers+6);
//     // sort_heap(numbers,numbers+6);

//     if(binary_search(numbers,numbers+6,7)){
//         cout<<"number found"<<endl;
//     }else{
//         cout<<"number not found"<<endl;
//     }
 
//     cout<<"sorted values: "<<endl;

//     for(int n:numbers){
//         cout<<n<<" ";
//     }

//     return 0;
// }


//partition andstable partition
// #include <iostream>
// #include <string>
// #include <algorithm>
// #include <vector>

// using namespace std;

// int main(){
//     vector<int> myints={1,2,3,4,5,6,7,8,9,10};
//     for(int x:myints){
//         cout<<x<<" ";
//     }
//     cout<<"\n";

//     partition(myints.begin(),myints.end(),[](auto x){return x%2==0;});

//     for(int x:myints){
//         cout<<x<<" ";
//     }
//     cout<<"\n";

//     return 0;
// }


//revisiting vectors
//containers
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> nums;
    vector<string> heros {"batman","flash","superman","robin"};//another way of initializing vectors

    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    for(int i=0;i<=5;++i){
        nums.push_back(i);
    }    

    cout<<nums.size()<<endl<<nums.capacity()<<endl<<nums.max_size()<<endl;;


    return 0;
}