#include<bits/stdc++.h>

using namespace std;
int firstoccurence(int a[10],int target,int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((mid==0 || target>a[mid-1]) && a[mid]==target)
        {return mid;}
        else if(a[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}
int lastoccurence(int a[10],int target,int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if((mid==n-1||target<a[mid+1])&&a[mid]==target)
            return mid;
        else if(a[mid]>target)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}


int main() {
    int a[10]={1,2,4,5,7,7,7};
    int n=7;
    cout<<"FIndex: "<<firstoccurence(a,7,7);
    cout<<"\nLIndex: "<<lastoccurence(a,7,7);

    return 0;
}
