#include <iostream>
using namespace std;


int startlab1(){
    cout<<"Name: Saad Ali Khan(SE-23083)"<<endl;
    cout<<"Lab 01"<<endl;
    return 0;
}

int l1q3(){
    int num,num1=0,num2=1;
    cout<<"Enter a number to get its fibbonacci sequence: ";
    cin>>num;
    if(num<= 0){
        cout<<"Enter number greater than zero";
    }else{
        for(int i=0;i<=num;i++){
            int sum = num1+num2;
            cout<<num1<<" ";
            num1=num2;
            num2=sum;
        }
    }
   return 0;
}

int main(){
    startlab1();
    l1q3();
    return 0;
}