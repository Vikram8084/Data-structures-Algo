#include<iostream>
using namespace std;
void shiftNegativeOneSide(int arr[],int size){
    int j=0;
    //j-> memory block ->jaha par main 
    //negative number ko store kar sakta hu
    
 for(int index=0;index<size;index++){
    //index-> entire array ko traverse karne k liye
    if(arr[index]<0){
        swap(arr[index],arr[j]);
        j++;
    }

 }
        
    for(int i=0;i<size;i++){

    cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={23,-7,12,-10,-11,40,60};
    int size=7;
    cout<<"the required array is:"<<endl;
    shiftNegativeOneSide(arr,size);
    return 0;
}