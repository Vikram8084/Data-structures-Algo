#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30};
    // print all triplets
    // and also print sum 

    int size=3;
    // using thrice  for loop
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++){

            for(int k=0;k<size;k++){
            

            cout<<"("<<arr[i]<<", "<<arr[j]<<", "<<arr[k]<<")"<<endl;

            }

            
        }
    }
    return 0;
}