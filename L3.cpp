//find palindrome in string
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

bool checkPalindrome(string s){
    int start=0;
    int end=s.length()-1;
    lower(s);
    while(start<end){
        if((s[start]!=s[end])){
            return false;
        }
        start++,end--;
    }
    return true;
}

int countPalindrome(string& s){
    int count=0;

    string word="";
    
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            if(checkPalindrome(word)){
                count++;
            }
            word.clear();
        }else{
            word=word+s[i];
       }

    }

     if(checkPalindrome(word)){
                count++;
     }

    return count;
}

int main(){
    string s;
    getline(cin,s);
    cout<<countPalindrome(s);
    return 0;
}