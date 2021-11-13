#include<iostream>
using namespace std;
int main(){
char ch;
int sum = 0;
while(cin>>ch){
    if(ch == 'z'){
        break;
    }
    if(ch == 'a'){
        sum++;
    }
    else if ( ch == 'b'){
        sum+=2;
    }
    else if (ch == 'c'){
        sum+=3;
    }
}
cout<<sum;
return 0;
}
