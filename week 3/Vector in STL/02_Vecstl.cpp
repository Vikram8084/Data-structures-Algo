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
    //in vector don't tell size of vector 
    //just keep inserting, i will manage the allocation
    vector<int>v; //array hi hai
    //while(i){
    //int d;cin>>d;
    //v.push_back(d)
    //cout<<"Capacity:"<<v.capacity()<<"size :"<<v.size;

    //insert
    v.push_back(1);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    print(v);

    //pop->delete->END
    //1->2->3
    v.pop_back();
    print(v);

}