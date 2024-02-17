#include<iostream>
using namespace std;
void sortZeroOne(int arr[],int n){
    int zerocount=0;
    int onecount=0;
    //stepA:count zero and one

    
    for(int i=0;i<n;i++){
        if(arr[i]==0)
            zerocount++;
        if(arr[i]==1)
            onecount++;
    }
    //stepB:place all zeros first
   int index=0;

   while(zerocount--){
    arr[index]=0;
    index++;
   }
   while(onecount--){
    arr[index]=1;
    index++;
   }
}
int main(){
    int arr[]={0,1,0,1,0,1,1,1,1,0,0,0,0,0};
    int n=14;
    sortZeroOne(arr,n);
      for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    

}