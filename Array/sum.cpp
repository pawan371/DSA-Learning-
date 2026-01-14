#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array element: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }cout<<endl;
  for(i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  cout<<"sum of array : "<<sum;
  return 0;
}