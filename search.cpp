#include<iostream>
using namespace std;
int Search(int arr[],int n,int x){
    for(int i=0;i<n;i++)
        if(arr[i]==x)
           return i;
    
           return -1;
}
          
              
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of a array: ";
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The required araay of given elements:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<","<<endl;
    }
cout<<"The index of the elements in array: "<<Search(arr,4,7)<<endl;
}