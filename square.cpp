#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
    double number,sroot;

    cout<<"input a number:";
    cin>>number;

sroot=sqrt(number);
cout<<"square root of"<<setw(3)<<number<<setw(5)<<"is:"<<sroot<<endl;
return 0;
}