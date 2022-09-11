#include<bits/stdc++.h>

using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int matrix[10][10];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];

    int l=0,r=n-1,t=0,b=m-1;
    while(l<=r&&t<=b) {
        for (int i = l; i <= r; i++)
            cout << matrix[t][i];
              t++;
        if(l<=r) {
            for (int i = t; i <= b; i++)
                cout << matrix[i][r];
            r--;
        }
        if(t<=b) {
            for (int i = r; i >= l; i--)
                cout << matrix[b][i];
            b--;
        }
        if(l<=r) {
            for (int i = b; i >= t; i--)
                cout << matrix[i][l];
            l++;
        }
    }

}
