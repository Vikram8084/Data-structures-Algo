//Transpose of matrix
#include<iostream>
using namespace std;

int findTranspose(int arr[][3],int row,int col){
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            //this is important part of the code
            if(j>i){

           swap(arr[i][j],arr[j][i]);
            }
            
            cout<<arr[i][j]<<" ";
        }
        for(int i=0;i<row;i++){
            
        }

    }

    // for(int i=0;i<row;i++){
    //     for(int j=0;j<col;j++){

    //     cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


}
int main(){
    int arr2[3][3]={
        {1,2,3},
        {5,6,7},
        {8,9,10}
    };
    int row=3;
    int col=3;
    cout<<"The Transpose of the Given Array is: "<<endl;

    findTranspose(arr2,row,col);

}