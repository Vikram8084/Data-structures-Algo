#include<iostream>
using namespace std;
int findMissing(int arr[],int n){
    int start=0;
    int end=n-1;;
    int  ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        int diff=arr[mid]-mid;
        if(diff==1){
            //right me jao
        start=mid+1;

        }
        else{
            //ans store
            //left me jao
            ans=mid;
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    //if last element is missing
    if(ans+1==0)
      return n+1;
    return ans+1;
    
}
int main(){
    int arr[]={1,2,3,4,6,7,8,9};
    int n=8;
    int ans=findMissing(arr,8);
    cout<<"The missing number is: "<<ans;
}