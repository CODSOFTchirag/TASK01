#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter the marks of student :";
    cin>>marks;
    switch(marks /10){
        case 9:
              if( marks <= 100 && marks > 90)
              cout<<" grade according to your marks is : O"<<endl;
              break;
        case 8:
              if(marks > 80)
              cout<<" grade according to your marks is : A+"<<endl;
              break;
        case 7:
             if(marks > 70)
             cout<<" grade according to your marks is :A"<<endl;
             break;
        case 6:
             if(marks > 60)
             cout<<" grade according to your marks is : B+"<<endl;
             break;
        case 5:
             if(marks > 50)
             cout<<" grade according to your marks is : B"<<endl;
             break;
        case 4:
            if(marks > 40)
            cout<<"grade according to your marks is :P"<<endl;
            break;

        default:
        cout<<"not cleared in exam ";
    }
    return 0;
}
