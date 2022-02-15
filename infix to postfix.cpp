
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool operand(char c){
    if(c=='+'||c=='-'||c=='*'||c=='/'){
        return true;
    }
    return false;
}
int precedence(char c){
    if(c=='+'||c=='-')
    return 1;
    return 2;
}
int main()
{
    string s ="a+b-c";
    stack<char> a;
    string ans;
    for(int i=0;i<s.length();i++){
        if(operand(s[i])){
            while(!a.empty() && precedence(a.top())>precedence(s[i])){
                ans+=a.top();
                a.pop();
            }
            
            a.push(s[i]);
        }
        else{
            ans+=s[i];
        }
    }
        while(!a.empty()){
            ans+=a.top();
            a.pop();
        }
    
    cout<<ans;

    return 0;
}
