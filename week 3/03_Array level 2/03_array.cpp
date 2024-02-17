#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    // print all pairs

    int size=3;
    // using twice for loop
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++){

            cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
        }
    }
    return 0;
}