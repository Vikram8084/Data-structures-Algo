#include<iostream>
using namespace std;
int sqRootFloor(int x){
    int low=1;
    int high=x;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        int mSq=mid*mid;
        if(mSq==x)
            return mid;
        else if(mSq>x)
            high=mid-1;
        else
        {
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}
int main(){
    cout<<sqRootFloor(10);
    return 0;
}