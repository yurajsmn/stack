#include<iostream>
#include<stack>
using namespace std;
int main(){
    string exp="{{({})}";
    stack<char>s;
    for(int i=0;i<exp.length();i++){
       char ch=exp[i];
       if( ch=='(' ||ch=='[' || ch=='{'){
        s.push(ch);
       }
       else{
            if(!s.empty()){
                char top1=s.top();
                if((ch==')' && top1=='(') || (ch=='}' && top1=='{') ||(ch==']' && top1=='[')){
                    s.pop();
                }else{
                    return false;
                }  
            }
            else{
                return false;
            }
       }
    }
    if (s.empty()) {
        cout << "The expression is balanced." << endl;
    } 
    else {
        cout << "The expression is not balanced." << endl;
    }
   
}