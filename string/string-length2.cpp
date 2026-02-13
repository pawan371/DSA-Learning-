/*Concatenation of Strings
Strings can be joined using the + operator or the append() function.
The + operator creates a new string, while append() modifies the existing string in place.
Time complexity for concatenation is O(n+m), where n is the size of string and m is the size of the string to be concatenated.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "Pawan";
    string str2 = "Tiwari";
    //using + oprator
    string result1 = str1 + " " +str2;
    cout<<"concatenated using + operator: "<<result1<<endl;

    //using append() function
    string result2 = str2;
    result2.append(" ").append(str1);   
    cout<<"concatenated using append() function: "<<result2<<endl;
    return 0;
}