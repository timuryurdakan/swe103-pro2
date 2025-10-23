#include <iostream>
using namespace std;
int main(){
    int number1;
    int number2;
char operation;
cout<<"please enter two number";
cin>>number1>>number2;
cout<<"operation";
cin>>operation;
switch(operation)
{
    case'+':
    cout<<number1<<"+"<<number2<<"="<<number1+number2;
    break;
    case'-':
    cout<<number1<<"-"<<number2<<"="<<number1-number2;
    break;
    case'*':
    cout<<number1<<"*"<<number2<<"="<<number1*number2;
    break;
    case'/':
    cout<<number1<<"/"<<number2<<"="<<number1/number2;
    break;
default:
cout<<"ERROR";
}
return 0;
}