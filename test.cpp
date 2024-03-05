#include<iostream>
using namespace std;
int main(){
 int arr[]={1,2,3,4,5,6};
 int n=6;
 for(int i=0;i<=(n-3);i++){
    swap(arr[i],arr[i+2]);

 }
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}