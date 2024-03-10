#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=0;
    int mid=(start+end)/2;
    while(start<=end){
        //found
        if(arr[mid]==target){
        
            ans = mid;
            mid=mid-1;
        }
        else if(target>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target<arr[mid]){
        
            start=mid-1;
        }
        mid=(start+end)/2;
        ans=mid;
    }

    return -1;
}
int main(){
    int arr[]={10,30,30,30,30,40,50};
    int target=30;
    int n=7;
    int ansIndex=binarySearch(arr,7,30);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index : "<<ansIndex<<endl;
        cout<<"The target "<<target<<" found at index :"<<ansIndex<<endl;
    }
}