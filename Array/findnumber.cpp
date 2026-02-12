#include<iostream>
using namespace std;
int main()
{
    int i,arr[]={12,12,345,34,23};
    int key=34;
    for(i=0;i<5;i++)
    {
       if(arr[i]==key)
       {
        cout<<arr[i];
       }
    }
    return 0;
}