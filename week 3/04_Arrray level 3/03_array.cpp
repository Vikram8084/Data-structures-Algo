#include<iostream>
using namespace std;
void printArray(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    //to take input from the user
    
    int arr[3][3];
    int row=3;
    int col=3;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Enter the input for row index: "<<i<<" column index: "<<j<<endl;
            cin>>arr[i][j];
        }
    }
    printArray(arr,row,col);

    return 0;
}
