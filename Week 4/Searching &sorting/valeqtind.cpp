#include<iostream>
using namespace std;
int valueequivalenttoIndex(int arr[],int n){
    int ans=0;
    for(int i=1;i<=n;i++){
        if(arr[i]==i){
            ans=arr[i];
        
        return ans;
        }
        else{
            break;
        }
    }

        
}
int main(){
    int arr[]={15, 2, 3, 12, 7};
    int n=5;
    int ans=valueequivalenttoIndex(arr ,n);
    cout<<ans;
}
