#include<bits/stdc++.h>
using namespace std;
stack<int>s1;
stack<int>s2;
bool empty(){
    if(s1.empty()&&s2.empty())
        return true;
    else
        return false;
}
void push(int data){
    s1.push(data);
}
void pop(){
    if(empty()) return;

    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }
    s2.pop();
}
int top(){
    if(empty())
        return -1;
    if(s2.empty()){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
    }

    return s2.top();

}
int main(){
    push(1);
    push(2);
    push(5);
    cout<<top()<<" ";
    pop();
    cout<<top()<<" ";
    pop();
    cout<<top()<<" ";
    pop();
    push(7);
    cout<<top()<<" ";
    pop();
    cout<<top()<<" ";
}
