#include<iostream>
using namespace std;
class Stack{
    //properties
    public:
    int index;
    int *arr;
    int size;
    //behaviour
    Stack(int s){
        this->size=s;
        arr=new int[s];
        index=-1;
    }
    void push(int ele){
        if(size-index>1){
            index++;
            arr[index]=ele;
        }else{
            cout<<"Stack is Overflow"<<endl;
        }
    }
    int pop(){
        if(index>=0){
        index--;
        return arr[index];
        }else{
            cout<<"Stack is Underflow"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(index>=0){
            return false;
        }else{
            return true;
        }
    }
    int peek(){
        if(index>=0){
            return arr[index];
        }else{
            cout<<"Stack is empty";
        }
    }
};
int main(){
    Stack st(5);
    st.push(5);
    // st.push(6);
    // st.push(8);
    // st.push(9);
    // st.push(10);
    // st.push(11);
    // st.push(12);
    if(st.isempty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"Stack is Not empty"<<endl;
    }
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
}