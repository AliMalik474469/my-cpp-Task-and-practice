#include <iostream>
using namespace std;
int main()
{
int number;
cout<<"enter your number.";
cin>>number;
if (number>=0 && number %5==0)
cout<<"the number is positive and divided by 5";
else if (number>=0 && number %2==0)
cout <<"the number is positive and even";
else if (number <0 &&number %5==0)
cout <<"number is negative and divided by 5";
else if(number <0 && number%2==0)
cout <<"number is negative and even";
else
cout <<"no requirement match ";
return 0;

}