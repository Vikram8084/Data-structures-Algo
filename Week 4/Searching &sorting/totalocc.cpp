#include<iostream>
using namespace std;
//int findtotaloccurance(int arr[],int n,int target){

int findfirstOccorance(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            //left me jao
            end=mid-1;
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
    int ansIndex=  findLastOccorance(arr,7,30) - findfirstOccorance(arr,7,30) + 1;
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
    
        cout<<"The target "<<target<<" total no of ocurance "<<ansIndex<<endl;
    }
}