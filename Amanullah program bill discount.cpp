#include<iostream>
using namespace std;

int main()
{
float Bill,Discount;
cout <<"Enter Bill:";
cin>>Bill;
if (Bill>=5000)
Discount=Bill*0.25;
else if(Bill>=2000)
Discount=Bill*0.10;
else 
Discount=0;
cout<<"Total Bill="<<Bill-Discount;
    return 0;
}