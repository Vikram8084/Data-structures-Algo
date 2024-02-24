#include<iostream>
#include<limits.h>
using namespace std;
//find maximum element in array
int findMax(int arr[][4],int row,int col){
    // starting from index [0][0]
    int maxAns=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){

            if(arr[i][j]>maxAns){
                maxAns=arr[i][j];
            }
        }
    }
    return maxAns;
}

//find minimum element in 2D array

int findMin(int arr[][4],int row,int col ){
    int minAns=arr[0][0];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]<minAns){
                minAns=arr[i][j];
            }
        }
    }
}
int main(){
    
    int arr2[3][4]={
        {1,2,3,4},
        {5,6,70,8},
        {9,10,1,11}
    };
    int row=3;
    int col=4;
    //printing maximum element in the array

    cout<<"printing maximum element: "<<findMax(arr2,row,col)<<endl;

    //printing minimum element in the array

    cout<<"printing minimum element: "<<findMin(arr2,row,col)<<endl;

    return 0;

}