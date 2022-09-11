#include<bits/stdc++.h>

using namespace std;
int cnt=0;
struct node{
    int data;
    node* prev;
    node* next;
}*dummy,*mid=NULL;
bool empty(){
    if(dummy->next==NULL)
        return true;
    else
        return false;
}
node* addnode(int data){
    node *newnode=new node();
    newnode->data=data;
    newnode->next=NULL;
    newnode->prev=NULL;
}

void push(int  data)
{
    cnt++;

    node *temp=addnode(data);
    if(empty())
        mid=temp;
    temp->next=dummy->next;
    dummy->next=temp;
    temp->prev=dummy;
    if(temp->next!=NULL)
        temp->next->prev=temp;
    if(cnt%2==0)
        mid=mid->prev;
}
void pop(){
    if(empty())
        return;
    cnt--;
    if(cnt==0)
        mid=dummy;
    if(cnt%2!=0)
        mid=mid->next;
    node *temp=dummy->next;
    dummy->next=temp->next;
    if(!empty())
    dummy->next->prev=dummy;
    delete(temp);

}
void getmid(){
    cout<<"Mid: "<<mid->data;
}
void gettop(){
    cout<<dummy->next->data;
}
void display(){
    node*cur=dummy->next;
    cout<<endl;
    while(cur){
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}
void delmid(){
    if(empty()){
        cout<<"\nEmpty";
        return;}
    cnt--;
    node* temp=mid;
    if(cnt==0)
        mid=dummy;
    else if(cnt%2!=0)
        mid=mid->next;
    else
        mid=mid->prev;
    temp->prev->next=temp->next;
    if(temp->next!=NULL)
    temp->next->prev=temp->prev;
}
int main(){

    dummy= addnode(-1);
    push(1);
    display();
    getmid();
    push(4);
    display();
    getmid();
    display();
    getmid();
    push(7);
    display();
    getmid();
    push(8);
    display();
    getmid();
    delmid();
    display();
    getmid();
    delmid();
    display();
    getmid();
    delmid();
    display();
    getmid();
    delmid();
    display();
    getmid();
    delmid();
    display();
    getmid();
    delmid();
    display();
    getmid();
    delmid();
    display();
    getmid();

}
