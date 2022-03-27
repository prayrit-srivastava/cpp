#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insert(stack<int>& s,int temp);
void sort(stack<int>& s){
    if(s.size()==1)
    return;
    int temp = s.top();
    s.pop();
    sort(s);
    insert(s,temp);
    return;
}
void insert(stack<int>& s,int temp){
    if(s.empty()||temp>=s.top()){
    s.push(temp);
    return;
    }
    int val = s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}
int main() {
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(7);
	s.push(6);
	s.push(4);
	sort(s);
	while(!s.empty()){
	cout<<s.top();
	s.pop();
	}
	
	return 0;
}