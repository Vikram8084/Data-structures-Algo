#include<iostream>
#include<limits.h>
using namespace std;

//sum of element row wise

int findSum(int arr[][4],int row,int col){
    
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){

            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }


}

//column wise sum

int findSumc(int arr[][4],int row,int col){
    
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){

            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }


}

//sum of diagonal element

int findSumd(int arr[][4],int row,int col){
    int sum=0;
    
    for(int i=0;i<row;i++){
        
        for(int j=0;j<col;j++){
            if(i==j){
            sum=sum+arr[i][j];
            }
        }
    }
        cout<<sum<<endl;


}
// using only i
int findSumD(int arr[][4],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum=sum+arr[i][i];
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

    //sum according to row wise

    cout<<"Row wise sum of element: "<<endl;

    findSum(arr2,row,col);

    cout<<"column wise sum :"<<endl;

    findSumc(arr2,row,col);
    cout<<"sum of diagonal element:"<<endl;
    findSumd(arr2,row,col);

    cout<<"sum of diagonal elenent:"<<endl;
    findSumd(arr2,row,col);

    
    return 0;

}