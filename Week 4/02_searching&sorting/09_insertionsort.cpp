#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> & v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void InsertionSort(vector<int> & v){
    int n=v.size();

    // i=0 chhod deta hu

    for(int i=0;i<n;i++){

        int key=v[i];
        int j=i-1;

        //move elements  of arr[0.....i-1] that are greater than
        //key  to one position ahead of their current position

        while(j>= 0 && v[j]>key){
            v[j+1]=v[j];

            j--;
        }

        v[j+1]=key;
    }
}
int main(){
    vector<int> v={44,33,55,22,11}; 

    InsertionSort(v);

    print(v);

    return 0;
}