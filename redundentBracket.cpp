#include<iostream>//requried debuging
#include<stack>
using namespace std;
bool test(string str){  
    stack<char>s;
    for (int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='+'||ch=='-'||ch=='*'||ch=='/'){
        s.push(ch);   
        }
        else{
            if(ch==')'){
                bool retundent=true;
                while (s.top()!='('){
                 char c= s.top();
                 if( c=='+'|| c=='-'|| c=='*'|| c=='/'){
                    return false;
                 }
                 s.pop();// pop the characher inside the stack
                }
            }
            
        }
    }
    return false;
}
int main(){
    string str="(a+b)";
    test(str);
}