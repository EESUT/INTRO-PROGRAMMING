#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
if(b>a){
    int temp = a;
    a = b;
    b = temp;
}
if(d>c){
    int temp = c;
    c = d;
    d = temp;
}
if(c > a){
    if(d > a){
        int temp1 = a;
        int temp2 = b;
        a = c;
        b = d;
        c = temp1;
        d = temp2;
    }
    else if(d > b){
        int temp1 = a;
        int temp2 = b;
        a = c;
        b = temp1;
        c = d;
        d = temp2;
    }
    else{
        int temp1 = a;
        int temp2 = b;
        a = c;
        b = temp1;
        c = temp2;
    }
}
if (c > b){
    if(d > b){
        int temp = b;
        b = c;
        c = d;
        d = temp;
    }
    else{
        int temp = b;
        b = c;
        c = temp;
    }
}

cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
return 0;
}
