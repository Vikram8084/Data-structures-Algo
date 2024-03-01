#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int target){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;//yaha kuchh problem hai
    while(start<=end){
        //found
        if(arr[mid]==target){
            //return index of the found element
            return mid;
        }
        else if(target>arr[mid]){
            //right me jao
            start=mid+1;
        }
        else if(target<arr[mid]){
            //left me jao
            start=mid-1;
        }
        //mid update
        mid=(start+end)/2;//mid ko update karte hai
    }
    //element not found
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90};
    int target=90;
    int n=9;
    int ansIndex=binarySearch(arr,9,90);
    if(ansIndex==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index : "<<ansIndex<<endl;
        cout<<"The target "<<target<<" found at index :"<<ansIndex<<endl;
    }
}