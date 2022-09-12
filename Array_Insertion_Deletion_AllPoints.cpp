#include<bits/stdc++.h>

using namespace std;
void deleteend(int a[10],int &n){
    //comsidering array cant be empty
    a[n-1]=0;
    n--;
}
void deletebeg(int a[10],int &n){
    for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=0;
    n--;
}
void deleteatany(int a[10],int &n,int index){
    for(int i=index;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=0;
    n--;
}
void insertend(int a[10],int &n,int data){
    //considering array cant be full
    a[n]=data;n++;
}
void insertbeg(int a[10],int &n,int data){
    for(int i=n;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=data;
    n++;
}
void insertatany(int a[10],int &n,int index,int data){
    for(int i=n;i>index;i--){
        a[i]=a[i-1];
    }
    a[index]=data;
    n++;
}
void display(int a[10],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int a[10]={1,2,4,5,7,8,9};
    int n=7;
    insertend(a, n, 5);
    deleteend(a,n);
    insertbeg(a, n, 5);
    deleteatany(a,n,3);
    insertatany(a, n,3, 5);
    deletebeg(a,n);
    display(a,n);
    return 0;
}
