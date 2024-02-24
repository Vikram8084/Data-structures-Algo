#include<iostream>
#include<vector>
using namespace std;
int main(){
    // int arr[5];
    // vector<int>v(5);
    // cout<<"size of vector : "<<v.size();

    //vector 2D
    vector< vector<int>  > arr(5,vector<int>(10,0));
    //row size-. arr.size
    for(int i=0; i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";


        }
        cout<<endl;
    }
    return 0;
}