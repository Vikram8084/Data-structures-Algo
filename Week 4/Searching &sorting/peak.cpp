#include<iostream>
using namespace std;
int findpeak(int arr[],int n){
    int start=0;
    int end=n-1;;

    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
        
            start=mid+1;
    
       }
       else{
        end=mid;
       }
       
    mid=(start+end)/2;
    }
    return start;

}
int main(){
    int arr[]={10,20,30,80,70,60,50};
    int n=8;
    int anss=findpeak(arr,8);
    cout<<"The peak number is: "<<anss;
}