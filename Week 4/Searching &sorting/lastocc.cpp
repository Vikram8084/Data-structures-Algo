#include<iostream>
using namespace std;
int findLastOccorance(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start)+(end-start)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            //right me jao me jao
            start=mid+1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else if(target<arr[mid]){
            end=mid-1;
        }
        mid=(start+end)/2;
        
    }
    return ans;

    }
int main(){
    int arr[]={10,30,30,30,30,30,40,50};
    int target=30;
    int n=7;
    int ansIndex=findLastOccorance(arr,7,30);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index : "<<ansIndex<<endl;
        cout<<"The target "<<target<<" found at index :"<<ansIndex<<endl;
    }
}