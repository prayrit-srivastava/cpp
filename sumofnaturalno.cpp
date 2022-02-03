#include <iostream>

using namespace std;

int sum(int x);
int sum(int x){
    if(x==0){
    return 0;  
    }
    else{
        return sum(x-1)+x;
    }
}
int main()
{
    int x=5;
    int b = sum(x);
    cout<<b;
    return 0;
}
