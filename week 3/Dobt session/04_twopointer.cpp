#include<iostream>
using namespace std;
int countZeroOne(int arr[],int n){
    int l=0;
    int h=n-1;
    while(l<h){
        if(arr[l]==0)
            l++;
        if(arr[h]==1)
           h--;

        else{
            swap(arr[l],arr[h]);

        }
    

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
    int arr[]={0,0,1,1,0};
    int n=5;
     countZeroOne(arr,n);
      
    

}