//
#include <bits/stdc++.h>
using namespace std;

void rotate(int a[],int l,int k){
	while(l<k)
		{swap(a[l],a[k]);
         k--;
         l++;
         }
}

void approach1(int a[],int n,int k){//TC:O(n*k)/SC:O(1)
    while(k--){
        int temp=a[n-1];
        for(int i=n-1;i>0;i--)
            a[i]=a[i-1];
         a[0]=temp;
    }
}


void approach2(int a[],int n,int k){//TC:O(n)/SC:O(n)
    int temp[n],index=0;
    for(int i=n-k;i<=n-1;i++)
        temp[index++]=a[i];
    for(int i=0;i<=n-k-1;i++)
        temp[index++]=a[i];
    for(int i=0;i<index;i++){
        a[i]=temp[i];
    }
}

void approach3(int a[] , int n ,int k){//TC O(n) SC O(1)
 
 rotate(a,0,n-k-1);//rotate left part
 rotate(a,n-k,n-1);//rotate right part
 rotate(a,0,n-1);//rotate entire array

}

void display(int a[],int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

int main(){

    int k=4,n=7;
int a[]={1,2,3,4,5,6,7};

approach1(a,n,k%n);

//approach2(a,n,k%n);//k%n cancels overflow of k

//approach3(a,n,k%n);

display(a,7);
return 0;	
}
