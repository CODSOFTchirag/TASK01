#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream obj;
    obj.open("out.txt");
    int count =0;
    char str[40];
    while(!obj.eof()){
        // obj.get(str);
        obj>>str;
        count++;
    }
//cout<<" number of character in the file is : "<<count<<endl;
cout<<" number of word in the file is : "<<count<<endl;
obj.close();
return 0;
}