#include <bits/stdc++.h>
using namespace std;

stack<int> pushStack,popStack;

bool _empty(){
	if(pushStack.empty() && popStack.empty())
		return true;
	else return false;
}

void _push(int data){
pushStack.push(data);
}


int _top(){
	if(_empty()) return -1;
    if(popStack.empty()){
    	while(!pushStack.empty()){
    		popStack.push(pushStack.top());
    	    pushStack.pop();
    	}
    }
     int result=popStack.top();
     return result;
}

int _pop(){
int result=_top();
popStack.pop();
return result;
}

int main(){

for (int i = 1; i < 6; i++)

{
   _push(i);
}

while(!_empty()){
	cout<<_pop()<<" ";
	cout<<_top()<<" ";
}

return 0;	
}