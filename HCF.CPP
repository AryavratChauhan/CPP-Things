#include<iostream>
#include<conio.h>
using namespace std;
int HCF(int,int);
int main(){
  int a,b;
  cout<<"This is a program to find HCF of TWO numbers!\n";
  cout<<"\nEnter first number: ";
  cin>>a;
  cout<<"\nEnter second number: ";
  cin>>b;
  cout<<"\nThe HCF of entered numbers is "<<HCF(a,b)<<endl;
  getch();
}
int HCF(int a,int b){
  int r=1;
  while(r){
    r=a%b;
    a=b;
    b=r;
  }
  return a;
}


