#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> & v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void SelectionSort(vector<int> & v){
    int n=v.size();

    for(int i=0;i < n-1;i++){

        int minindex=i; //ith element hi smallest element hai

        for(int j=i+1;j<n;j++ ){

            if(v[j] < v[minindex]){
                minindex=j;
            }
        }

        //swap ith and minindex value
        swap(v[i],v[minindex]);
    }
}
int main(){
    vector<int> v={44,33,55,22,11}; 

    SelectionSort(v);

    print(v);

    return 0;
}