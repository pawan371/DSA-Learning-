#include<iostream>
using namespace std;
int main(){
    //creating string
    string str = "Hello World";
    //accessing string using index oprator []
    cout<<"First character: "<<str[0]<<endl;
    cout<<"Fifth character: "<<str[4]<<endl;
    //accessing using at() function
    cout<<"second character using at():"<<str.at(1)<<endl;
    cout<<"fourth character using at():"<<str.at(3)<<endl;
    return 0;
}


// Time complexity: O(1) for both index operator and at() function as they access a specific character in the string directly.
// Space complexity: O(1) as we are not using any additional space to access the characters in the string.