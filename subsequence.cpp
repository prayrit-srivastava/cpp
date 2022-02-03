#include<bits/stdc++.h>
using namespace std;
void sub(int ind,vector<int> &ds,vector<int> arr,int n){
    if(ind == n){
        for(auto it:ds){
        cout<<it<<" ";
        }
        if(ds.size() == 0){
            cout<<"{}";
        }
        cout<<",";
        return;
    }

    ds.push_back(arr[ind]);
    sub(ind+1,ds,arr,n);
    ds.pop_back();
    sub(ind+1,ds,arr,n);
    
}
int main(){
    vector<int> arr={3,1,2};
    int ind=0;
    vector<int> ds;
    int n = arr.size();
    sub(0,ds,arr,n);
    
}