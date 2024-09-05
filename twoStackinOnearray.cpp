#include<iostream>
using namespace std;
class stack2{
    public:
    int size;
    int index1;
    int index2;
    int *arr;
    stack2(int s){
        this->size=s;
        arr=new int[s];
        index1=-1;
        index2=size; 
    }
    void push1(int ele){
        if(index2-index1>1){
        index1++;
        arr[index1]=ele;}
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    void push2(int ele){
        if(index2-index1>1){
        index2--;
        arr[index2]=ele;}
        else{
            cout<<"Stack is overflow"<<endl;
        }
    }
    void pop1(){
        if(index1>=0){
            int ans=arr[index1];
            index1--;
        }
        else{
            cout<<"Stack is Empty";
        }
    }
    void pop2(){
        if(index2<size){
            int ans=arr[index2];
            index2++;
        }else{
            cout<<"Stack is Empty";
        }
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack2 s(4);
    s.push1(1);
    s.push1(2);
    s.push2(4);
    s.push1(3);
    s.print();
    s.push1(5);
    s.push2(6);
}