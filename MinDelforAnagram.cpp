#include<bits/stdc++.h>

using namespace std;
int approach1(string s1,string s2){
    if(s1==s2)
        return 0;
    int cnt=0;
    for (int i = 0; i <s1.length() ; ++i) {
        bool found=false;
        for (int j = 0; j <s2.length() ; ++j) {
            if(s1[i]==s2[j])
            {
                s2[j]='#';
                //s1[i]='#';//another possiblity
                found=true;
                break;
            }

        }
    if(!found)
        cnt++;
    }
//    for (int i = 0; i <s1.length() ; ++i) {
//        if(s1[i]!='#')
//            cnt++;
//    }
    for (int i = 0; i <s2.length() ; ++i) {
        if(s2[i]!='#')
            cnt++;
    }
    return cnt;
}
int approach2(string s1,string s2){
    if(s1==s2)
        return 0;
    int m=s1.length(),n=s2.length(),i=0,j=0;
    int cnt=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    while(i<m&&j<n){
        if(s1[i]==s2[j]){i++;j++;}
        if(s1[i]<s2[j])
           {i++;cnt++;}
        else
        {j++;cnt++;}
    }
    for (int k = i; k <s1.length() ; ++k)
        cnt++;
    for (int k = j; k <s2.length() ; ++k)
        cnt++;
    return cnt;
}
int approach3(string s1,string s2){
    if(s1==s2)
        return 0;
    int cnt=0;
    int arr[26]={0};
    for (int i = 0; i <s1.length() ; ++i) {
        arr[s1[i]-'a']++;
    }
    for (int i = 0; i <s2.length() ; ++i) {
        arr[s2[i]-'a']--;
    }
    for (int i = 0; i <26 ; ++i) {
        cnt+=(int)abs(arr[i]);
    }
return cnt;
}
int main(){
    string s1="ancd";
    string s2="dsahkkh";
    cout<<"Min Del: "<<approach1(s1,s2);
    cout<<"\nMin Del: "<<approach2(s1,s2);
    cout<<"\nMin Del: "<<approach3(s1,s2);
    return 0;
}
