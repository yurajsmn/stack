#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>s){
      while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
void push_bottom(stack<int>&s,int num,int cont,int size){
    if(cont==size){
        s.push(num);
        return;
    }
    int m=s.top();
    s.pop();
    push_bottom(s,num,cont+1,size);
    s.push(m);


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
    push_bottom(s,0,0,s.size());
    print(s);
}