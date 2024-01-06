#include<iostream>
using namespace std;

    int binarySearch(int arr[],int size,int key){
        int start=0;
        int end=size-1;
        int mid=(end+start)/2;
        while(start<=end){
            if(arr[mid]==key){
                return mid;
            }
            if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=(end+start)/2;
        }
        return -1;
    }
    int main(){
        int even[6]={2,3,4,5,6,7};
        int odd[5]={1,3,5,7,9};
        int index=binarySearch(even,6,6);
        cout<<"Index of 6 is:"<<index<<endl;
        return 0;
    }
