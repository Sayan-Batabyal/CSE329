#include<bits/stdc++.h>

using namespace std;
bool approach1(string s){
    if(s.length()<26)
        return false;
    for (char i = 'a'; i <='z' ; ++i) {
        bool found=false;
        for (int j = 0; j < s.length(); ++j) {
            if(s[j]==i)
                found=true;
        }
        if(!found)
            return false;
    }
    return true;
}
bool approach2(string s){
    bool ar[26];
    for (int i = 0; i <s.length() ; ++i) {
        ar[s[i]-'a']=true;
    }
    for (int i = 0; i <26 ; ++i) {
        if(!ar[i])
            return false;
    }
    return true;
}
int main(){
    string s="abcdefghijklmnopqrstuvwxyz";
    cout<<"Pangram: "<<approach2(s);
    return 0;
}
