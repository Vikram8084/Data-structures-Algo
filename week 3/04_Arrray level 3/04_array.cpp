#include<iostream>
using namespace std;
bool findTarget(int arr[][4],int row,int col,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                //if found return true
                return true;
            }
        }
    }

//iss line par tabhi aa skte hai
//jab sare k sare k saare elements check
//ho chuke honge and target mila hoga
//return false

return false;
}

int main(){

    int arr2[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,1,11}
    };
    int row=3;
    int col=4;
    int target=11;
    cout<<"found or not: "<<findTarget(arr2,row,col,target)<<endl;


}