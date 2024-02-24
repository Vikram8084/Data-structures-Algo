#include<iostream>
using namespace std;
//sum of diagonal elements

int SumDiagonal(int arr[][4],int row,int col){
    int sum=0;
    
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            //this conditon is required to find sum bottom to top approach 
            if(i+j==3){
            sum=sum+arr[i][j];
            }
        }
    }
        cout<<sum<<endl;
}

int main(){
    
    int arr2[4][4]={
        {1,2,3,4},
        {5,6,70,8},
        {9,10,1,11},
        {4,5,6,7}
    };
    int row=4;
    int col=4;
    //sum of diagonal element in opposite aaproach
    cout<<"the sum of diagonal element is: "<<endl;
    SumDiagonal(arr2,row,col);

}