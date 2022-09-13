#include<bits/stdc++.h>

using namespace std;
bool approach1(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    for(int i=0;i<s1.length();i++){
        bool found=false;
        for(int j=0;j<s2.length();j++){
            if(s2[j]==s1[i]){
                s2[j]='#';
                found=true;
                break;
            }
        }
      if(!found)
          return false;
    }
    return true;
}

bool approach2(string s1,string s2){
    if(s1.length()!=s2.length())
        return false;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2)
        return true;
    else return false;
}
bool approach3(string s1,string s2) {
    if (s1.length() != s2.length())
        return false;
    int a[26];
    for(int i=0;i<s1.length();i++){
        a[s1[i]-'a']++;
    }
    for(int i=0;i<s2.length();i++){
        a[s2[i]-'a']--;
    }
    for (int i = 0; i < 26; ++i) {
        if(a[i]!=0)
            return false;
    }
    return true;
}
int main(){
    string s1="naays";
    string s2="sayan";
    cout<<"Anagram: "<<approach3(s1,s2);
    return 0;
}
