#include<bits/stdc++.h>

using namespace std;
int binarysearch(int a[10],int target,int n){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(a[mid]==target)
            return mid;
        else if(a[mid]>target)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;
}
int main() {
    int a[10]={1,2,4,5,7,8,9};
    int n=7;
    cout<<"Index: "<<binarysearch(a,7,7);

    return 0;
}
