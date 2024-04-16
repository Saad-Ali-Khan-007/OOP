#include <iostream>
using namespace std;


int startlab1(){
    cout<<"Name: Saad Ali Khan(SE-23083)"<<endl;
    cout<<"Lab 01"<<endl;
    return 0;
}

int l1q2(){
   int num;
   cout<<"Enter a number to check even or odd: ";
   cin>>num;
   if(num % 2==0){
        cout<<num<<" is even";
   }else{
    cout<<num<<" is odd";
   }
   return 0;
}

int main(){
    startlab1();
    l1q2();
    return 0;
}