#include<iostream>
using namespace std;
int main()
{
    float a ,b;
    char op;
    char again = 'Y';
    while (again =='Y' || again == 'y')
   {
    cout<<"+-*/+-*/+-*/+-*/+-*/+-*/+-*/CALCULATOR+-*/+-*/+-*/+-*/+-*/" << endl;
    cout<<"Enter 1st number\n";
    cin>>a;
    cout<<"Enter 2nd number\n"<< endl;
    cin>>b;
    cout<<"Enter operator\n"<< endl;
    cin>>op;
    switch(op)
    {
      case '+': 
      cout<<"Added no. is---->>>>>>"<< a+b << endl;
      break;

      case '-': 
      cout<<"Substracted no. is" << a-b << endl;
      break;  

      case '*': 
      cout<<"Multiplied no. is" << a*b << endl;
      break;

       case '/': 
      cout<<"Divided no.is" << a/b  << endl;
      break;

      default :
      cout<<"The operator is incorrect\n" << endl ;
      break;
      
    }
    cout<<"Calculate Again? (y/n)";
    cin>>again;
  }
  cout<<"#######END########## " << endl;
}
