//The number of characters in a string can be found using size() or length().
//Time complexity to find string length is O(1).
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "Pawan Tiwari";// size = 12
    //finding length of string using size() function
    cout<<"legth of string using size(): "<<str.size()<<endl;
    //finding length of string using length() function 
    cout<<"length of string using length(): "<<str.length()<<endl;
    return 0;
}


