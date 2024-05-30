#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"let's gauss number :";
    cin>>n;

  srand((unsigned)time(0)); 
    int guess;
    guess = rand()%10; 
    cout<<guess<<endl;

// NUMBER IS CORRECT 
    if(n == guess){
        cout<<"gauss number is correct !!!";
    }
    //NUMBER IS  GREATER THAN ACTUAL VALUE
    else if(n < guess){
        cout<<" gauss number is greater then actual number ";
    }
    //NUMBER IS  SMALLER THAN ACTUAL VALUE
    else{
        cout<<" gauss number is smaller then actual number";
    }
    return 0;
}
