#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;

    int i=1;
    while(true){
        if(i&1==1){
            //odd
            a=a-i;
            b=b+i;
            if(a<0){
                cout<<"A cannot give";
                break;
            }
        }else{
            //even
            b=b-i;
            a=a+i;
            if(b<0){
                cout<<"B cannot give";
                break; 
            }
        }
        i++;
    }

    return 0;
}

