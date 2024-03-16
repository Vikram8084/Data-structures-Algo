#include<iostream>
using namespace std;
int nearlySortedArray(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        mid=s+(e-s)/2;
        if(mid-1>=0 && arr[mid-1]== target){
            return mid-1;
        }
        if(arr[mid] == target)
            return mid;
        
        if(mid+1<=n && arr[mid+1] == target)
            return mid+1;
        
        if(target>arr[mid]){
            //right
            s=mid+2;//+2 to avoid again visitin of same number 
        }
        else{
            //left
            e=mid-2;
        }


    }
    return -1;
}
int main(){
    int arr[]={20,10,30,50,40,70,60};
    int target=70;
    int n=7;
    int  found=nearlySortedArray(arr,n,target);
   // cout<<"target is at :"<<ans<<endl;
   if(found == -1){
    cout<<"Element Not found "<<endl;
   }
   else{
    cout<<"Element  Found at index :"<< found <<endl;
   }
}