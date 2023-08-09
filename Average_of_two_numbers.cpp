#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  int a,b;
  cin>>a>>b;
  float c;
  c=(a+b)*0.5;
  cout<<"Average"<<" "<<"of"<<" "<<a<<" "<<"and"<<" "<<b<<" "<<"is"<<":"<<" "<<fixed<<setprecision(2)<<c;
}