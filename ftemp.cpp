#include <iostream>
using namespace std;

int main(){
    int fTemp;
    int cTemp;

cout<<"please enter a temperature\"as a fahrenheit\" \n";
cin>>fTemp;
cTemp=(fTemp-32)*5/9;
cout<<fTemp<<"Fahrenheit="<<cTemp<<"celcius"<< endl;
return 0;
}