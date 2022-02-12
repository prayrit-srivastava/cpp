#include <iostream>
//stack using array;
using namespace std;
#define n 10

class stack{
    int* arr;
    int top;
    public:
    stack(){
        arr = new int[n];
        int top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }
        top--;
        
    }
    int Top(){
        if(top==-1){
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        if(top==-1)
        return true;
        return false;
    }
};
int main()
{
    stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    cout<<st.Top();
    return 0;
}
