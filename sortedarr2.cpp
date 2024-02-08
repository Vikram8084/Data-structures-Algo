#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++)
        if(arr[i]<arr[i-1])
            return false;
return true;            
}
int main(){
    int arr[]{2,5,7,8,10};
    cout<<isSorted(arr,5);
}