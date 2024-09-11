#include<iostream>
#include<stack>
using namespace std;
void insertsort(stack<int>&s,int num){
    if(s.empty() || (!s.empty() && s.top()<num)){
        s.push(num);
        return;
    }
    int ele=s.top();
    s.pop();
    insertsort(s,num);
    s.push(ele);
    
}
void sort(stack<int>&s){
    if(s.empty()){
        return;
    }
    int el=s.top();
    s.pop();
    sort(s);
    insertsort(s,el);
}
void print(stack<int>s){
      while (!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main(){
    stack<int>s;
    s.push(3);
    s.push(4);
    s.push(1);
    s.push(8);
    s.push(9);
    s.push(17);
    sort(s);
    print(s);
}