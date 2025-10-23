#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int number1;
    int number2;
cout<<"please enter two integer numbers";
cin>>number1>>number2;
if (number1>number2)
    cout<<number1<<"bigger than"<<number2;
if (number2>number1)
    cout<<number2<<"bigger than"<<number1; 
if (number1==number2)
    cout<<number1<<setw(12)<<"equals to"<<setw(5)<<number2;
return 0;

}