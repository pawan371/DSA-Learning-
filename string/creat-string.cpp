#include<iostream>
using namespace std;
int main(){
    //creating string
    string demo= "Hello World";
    //traversing using index
    cout<< "using index: ";
    for(int i=0; i<demo.size()/*find size*/;i++){
        cout<<demo[i]<<" ";
    }
    cout<<endl;
    //traversing using range based for loop
    cout<<"using range based for loop: ";
    for(char ch: demo){
        cout<<ch;
    }
    cout<<endl;
//traversing using iterator
    cout<<"using iterator: ";
    for(auto it = demo.begin(); it!=demo.end(); it++){
        cout<<*it;
    }
    cout<<endl;
    return 0;
}
