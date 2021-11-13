#include<iostream>
using namespace std;
int main(){
int x1 , x2 , x3 , y1 , y2 , y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
double S = x1 * (y2 - y3) + x2  * (y3 - y1) + x3 * ( y1 - y2);
if ( S < 0 ){
    S*= -0.5;
}
else{
    S*=0.5;
}
cout<<S;

return 0;
}
