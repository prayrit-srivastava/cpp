#include<bits/stdc++.h>
using namespace std;
void sub(int ind,vector<int> &ds,vector<int> arr,int n,int k){
    static int sum = 0;
    if(ind == n){
        if(sum == k){
            for(auto it:ds){
                cout<<it;
            }
            cout<<" ";
        }
        return;
    }

    ds.push_back(arr[ind]);
    sum += arr[ind]; 
    sub(ind+1,ds,arr,n,k);
    ds.pop_back();
    sum -= arr[ind];
    sub(ind+1,ds,arr,n,k);
    
}
int main(){
    vector<int> arr={1,1,2};
    int ind=0;
    int k = 2;
    vector<int> ds;
    int n = arr.size();
    sub(0,ds,arr,n,k);
}