#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    //input

    //use if ,else if,else case;
if(ch>='A' && ch<='Z'){
    cout<<"1"<<endl;
}
else if(ch>='a'  && ch<='z'){
    cout<<"0"<<endl;

}
else{
    cout<<"-1"<<endl;

   return 0; 
}
    

}