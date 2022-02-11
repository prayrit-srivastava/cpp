#include <iostream>
#include <bits/stdc++.h> 

using namespace std;
class student{
    private:
    string sname;
    vector<int> marks_arr;
    int Total;
    int Tmax;
    public:
    void assign(string name,vector<int> marks){
        sname=name;
        marks_arr=marks;
    }
    void compute(){
        int sum = 0;
        for(int i:marks_arr){
            sum+=i;
        }
        Total = sum;
        Tmax = *max_element(marks_arr.begin(),marks_arr.end());
    }
    void display(){
        cout<<"sname: "<<sname<<endl;
        for(int i=0;i<marks_arr.size();i++){
            cout<<marks_arr[i]<<" ";
        
    }
    cout<<endl;
    cout<<"tmax: "<<Tmax<<endl;
    
}
};
int main()
{   
    student s;
    s.assign("alice",{2,3,4,5});
    s.compute();
    s.display();

    

    return 0;
}
