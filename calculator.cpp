#include<iostream>
using namespace std;

int main(){
    int n;
    int m;
    cout<<"enter the value of n:";
    cin>>n;
    cout<<"enter the value of m:";
    cin>>m;
    int i;
    cout<<"press 1 for addition  2 for substraction 3  for multiplication  4 for division"<<endl;
    cout<<"enter the value of choice:";
    cin>>i;
    switch(i){
        case 1:
              int add;
              add=n+m;
              cout<<"addition of n and m is :"<<add<<endl;
              break;
        case 2:
              int sub;
              sub=n-m;
              cout<<"substraction of n and m is :"<<sub<<endl;
              break;
        case 3:
             int mul;
             mul=m*n;
             cout<<"multiplication of n and m is :"<<mul<<endl;
             break;
        case 4:
             int div;
             div=n/m;
             cout<<"division of n and m is :"<<mul<<endl;
             break;
        default:
        cout<<"invlaid operation !!!";
    }
    return 0;
}
