#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i]==target)
        return i;
    }
}
int main(){
    int arr[]={20,30,10,40,50};
    int n=5;
    int target=50;
    int ans=linearsearch(arr,5,50);
    cout<<ans;
    return 0;
    
}
