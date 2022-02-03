// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct rectangle{
    int length;
    int breadth;
};
int area(int l,int b);
int area(int l,int b){
    return l*b;
};
int change(struct rectangle *r,int b);
int change(struct rectangle *r,int b){
    r->length = 20;
    
    return 0;
};
int main() {
    rectangle r{10,5};
    change(&r,5);
    cout<<r.length;
    
    return 0;
}