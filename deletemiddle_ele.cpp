#include<iostream>
#include<stack>
using namespace std;
void middle(stack<int>&s,int size,int count){
    if(count==size/2){
        s.pop();
        return;
    }
    int ans=s.top();
    s.pop();
    middle(s,size,++count);
    s.push(ans);
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    s.push(0);
    middle(s,6,0);
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}