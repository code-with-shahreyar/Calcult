#include<iostream>
using namespace std;
int main()
{
string operation;
int num1,num2;
    cout << "Enter the first number" << endl;
    cin>>num1;
    cout<<"Enter  the operation(+,-,*,/)"<<endl;
    cin>>operation;
    cout << "Enter the second number" << endl;
    cin>>num2;
    if(operation=="+")
    {
    cout<<num1+num2<<endl;
    }
    else if(operation=="-")
    {
      cout << num1- num2<< endl;
      }
      else if(operation=="*")
      {
      cout << num1*num2<< endl;
      }
      else if(operation=="/")
      {
      cout <<num1/num2 << endl;
      }
      else
      {
      cout << "operation is invalid" << endl;
      }
      
    return 0;
}