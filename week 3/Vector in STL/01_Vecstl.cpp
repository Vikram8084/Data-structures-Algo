#include<iostream>
using namespace std;
void fun(int a[],int n ){
    cout<<" array elements are :"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

}
int main(){
    int n;
    cout<<"enter the no of elements in array :";
    cin>>n;
   // int arr[n];
    int *arr=new int [n];//each element would be garbage 0 or 1;
    //taking n elements input and inserting in array
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr[i]=data;

    }
    
    fun(arr,n);
}