#include<iostream>
using namespace std;
void printArray(int arr[][4],int row,int col){

    //printing column wise
    
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

}
int main(){
    //create 2D array
    int arr[2][4]={{1,2,3,4},{5,6,7,8}};
    int arr1[4][3]={{1,3,4},{2,3,4},{2,5,6},{4,5,7}};
    //cout<<arr1[0][1];

    int arr2[3][4]={
        
        {1,2,3,4},
        {5,6,7,8},
        {9,10,1,11}

    };
    //print 2D array
    int row=3;
    int col=4;
    printArray(arr2,row,col);
    return 0;


}
