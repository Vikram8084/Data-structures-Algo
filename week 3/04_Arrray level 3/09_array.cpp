#include<iostream>
using namespace std;
void printArray(int arr[][3],int row,int col){

    //printing array
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
void transpose(int arr[3][3],int row,int col ){
    for(int i=0;i<row;i++){
        //used for swapping 


        for(int j=i;j<col;j++){

            swap(arr[i][j],arr[j][i]);

        }
    }
}
int main(){
    int arr2[3][3]={
        {1,2,3},
        {5,6,7},
        {8,9,10}
    };
    int row=3;
    int col=3;
    cout<<"before swapping"<<endl;

    printArray(arr2,row,col);

    cout<<endl;

    cout<<"After swapping:"<<endl;

    transpose(arr2,row,col);

    cout<<endl;

    printArray(arr2,row,col);

}