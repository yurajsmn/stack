#include<iostream>
#include<stack>
using namespace std;
void push_bottom(stack<int>&s,int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    int el=s.top();
    s.pop();
    push_bottom(s,ele);
    s.push(el);
}
void reverse(stack<int>&s){
    if(s.empty()){
        return;
    }
    int ele=s.top();
    s.pop();
    reverse(s);
    push_bottom(s,ele);
}
void print(stack<int>s){
      while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    print(s);
    cout<<endl;
    reverse(s);
    print(s);
}