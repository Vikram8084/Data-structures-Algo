#include<iostream>
using namespace std;
int findMissing(int arr[],int n){
    int start=0;
    int end=n-1;;
    int  ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if((arr[mid]-arr[start])==(mid-start)){
            start=mid+1;
        }
        else{
            ans=mid;
            end=mid-1;
        }
        mid=(start+end)/2;
        

    }
    return ans+1;
        
    
}
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    int ans=findMissing(arr,8);
    cout<<"The missing number is: "<<ans;
}