#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    string a="Yuvraj";
    string ans="";
    for (int i = 0;i<a.length();i++){
        char ch=a[i];
        s.push(ch);
    }
    while (!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans;
    
    
}