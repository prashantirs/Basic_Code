#include<bits/stdc++.h>
using namespace std;

/*CFO-->(Compile time polymorphism ),(Function Overloading),(Operator Overloading)
  RMO-->(Run time polymorphism),(Method/Function Overriding)-->only in inheritance
*/

//Function Overloading

int add(int a,int b){
    return a+b;
}

float add(float a){
    return a;
}

int add(int a,int b,int c){
    return a+b+c;
}

int main(){
    cout<<add(2,4)<<endl;
    cout<<add(2,4,4)<<endl;
    cout<<add(2.55)<<endl;
    return 0;
}