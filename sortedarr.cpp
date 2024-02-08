#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++)
     for(int j=i+1;j<n;j++)
      if(arr[j]<arr[i])
        return false;
    return true;    
}
int main(){
    int arr[100];
    int a;
    cout<<"Enter the no of elements";
    cin>>a;
    for(int i=0;i<a;i++){

    cin>>arr[i];
    }
    cout<<isSorted(arr,a)<<endl;
    return 0;
}