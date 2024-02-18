#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v){
    int size=v.size();
    cout<<"printing array :"<<endl;
    for(int i=0;i<size;i++){
       // cout<<v[i]<<" ";
       cout<<v.at(i)<<endl;
    }
    cout<<endl;
}


int main(){
    vector<int>v;// array hi hai
    //insert
    int n;
    cout<<"enter the no of element :";
    cin>>n;
    for(int i=0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);

    }
    for(int i=0;i<10;i++){
        v.push_back(80);

    }
    //i want to clear the vector
    v.clear();
    v.push_back(59);

    print(v);

}