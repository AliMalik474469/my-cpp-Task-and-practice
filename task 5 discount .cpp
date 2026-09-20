#include<iostream>
using namespace std;

int main()
{ double amount;

    cout<<"Enter The Total Amount=";
    cin>>amount;
    if(amount>=40000)
    {
    amount=amount-amount*30/100;
    cout<<"Total amount after Discount is:"<<amount;
    }
    else if(amount>=25000)
    {
    amount=amount-amount*25/100;
    cout <<"Total amount after Discount is:"<<amount;
    }
    else if(amount>=10000)
    {
    amount=amount-amount*15/100;
    cout <<"Total amount after Discount is:"<<amount;
    }
    
    return 0;
}