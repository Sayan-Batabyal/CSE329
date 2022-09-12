#include<bits/stdc++.h>

using namespace std;
int BinaryRotated(int a[10],int n,int target){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=low+(high-low)/2;
        if(a[mid]==target)
            return mid;
        if(a[low]<=a[mid]){
        if(target>=a[low]&&target<a[mid])
            high=mid-1;
        else
            low=mid+1;
        }
        else{
            if(target>a[mid]&&target<=a[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }
    return -1;
}


int main() {
    int a[10]={9,10,2,4,5,7,8,};
    int n=7;
    cout<<"Index: "<<BinaryRotated(a,n,8);
    return 0;
}
