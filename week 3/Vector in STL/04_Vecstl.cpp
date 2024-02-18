#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int size=v.size();
    cout<<"printing array :";
    for(int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //vector initialisation
    vector<int>arr;// default with no data 0 size

    vector<int>arr2(5,-1);
    arr2.push_back(59);
    print(arr2);

    vector<int>arr3={1,2,3,4,5};
    arr3.pop_back();
    print(arr3);

    vector<int>arr4{1,2,3,4,5};
    print(arr4);

    //how to copy vector
    vector<int>arr6(arr3);
    print(arr6);

}