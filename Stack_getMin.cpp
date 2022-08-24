#include <bits/stdc++.h>
using namespace std;

int Min=INT_MAX;

struct node{
int data;
node* next;
}*head;

node* addnode(int data){
node* newnode=new node();
newnode->next=NULL;
newnode->data=data;
return newnode;
}

void _push(int data){

     node* newnode=addnode(data);
     newnode->next=head->next;
     head->next=newnode;
}
void _pop(){
	 node* temp=head->next;
	 head->next=head->next->next;
	 temp->next=NULL;
	 delete(temp);
}
bool empty(){
	if(head->next==NULL)
	return true;
	else return false;
}

int top(){
	return head->next->data;
}

void push(int data){
	if(data<=Min){
		_push(Min);
		Min=data;
	}
	_push(data);
}

void pop(){

	if(empty())
		return;

	if(top()==Min)
		{_pop();
          Min=top();
          _pop();}


     else _pop(); 
     }

int getMin(){
	return Min;
}    
int main(){
	node *dummy=new node();
     dummy->next=NULL;
     dummy->data=-1;
     head=dummy;
	push(10);
	push(4);
	push(6);
	push(-1);
	push(0);
	push(-1);
	cout<<Min<<" ";
	pop();
	cout<<Min<<" ";
	pop();
	cout<<Min<<" ";
	pop();
	cout<<Min<<" ";	
    pop();
	cout<<Min<<" ";
	pop();
	cout<<Min<<" ";
	pop();
	cout<<Min<<" ";
return 0;	
}
