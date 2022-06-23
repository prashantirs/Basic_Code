#include<bits/stdc++.h>
using namespace std;

void lower(string& s){
    for(int i=0;i<s.length();i++){
        if( (s[i]>='a') && (s[i]<='z') ){
            continue;
        }else{
            s[i]='a'+(s[i]-'A');
        }
    }
}

int main(){
    string s;
    // cin>>s;
    getline(cin,s);
    cout<<"You entered ----> "<<s<<endl;
    lower(s);
    cout<<"Lower case -----> "<<s<<endl;
    return 0;
}