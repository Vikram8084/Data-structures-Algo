#include<iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int start=0;int end=n-1;
   int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
     mid=start+(end-start)/2;
    }
    return ans;

}
int lastOcc(int arr[],int n,int key){
    int start=0;int end=n-1;
   int ans=-1;
    int mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
     mid=start+(end-start)/2;
    }
    return ans;

}
int main(){
    int arr[10]={1,2,3,3,3,3,3,9,9,10};
    cout<<"The first ocuurance of 9 at index :"<<firstOcc(arr,10,9)<<endl;
    cout<<"The last occurance of 9 is at index: "<<lastOcc(arr,10,9)<<endl;
}
