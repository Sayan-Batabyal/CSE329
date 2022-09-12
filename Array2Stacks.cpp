#include<bits/stdc++.h>

using namespace std;
int top1,top2;
int n,*a;

bool empty1(){
    if(top1==0)
      return true;
    else return false;
}
bool empty2(){
    if(top2==n-1)
        return true;
    else return false;
}
void push1(int data){
    if(top1>top2)
        return;
    a[top1]=data;
    top1++;
}

void push2(int data){
    if(top1>top2)
        return;
    a[top2]=data;
    top2--;
}
void pop1(){
if(empty1())
    return;
a[top1]=0;
top1--;
}

void pop2(){
    if(empty2())
        return;
    a[top2]=0;
    top2++;
}
void display(){
    for (int i = 0; i <n ; ++i) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    n=6;
    top1=0;
    top2=n-1;
    a=new int(n);
   push1(1);
   display();
    push1(2);
    display();
    push2(10);
    display();
    push2(3);
    display();

    push2(3);
    display();
    push2(3);
    display();
    push2(3);
    display();
    pop1();
    pop2();
    push1(5);
    display();
    return 0;
}
