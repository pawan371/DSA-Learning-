#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element :";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    return 0;
}