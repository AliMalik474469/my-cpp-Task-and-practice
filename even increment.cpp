#include<iostream>
using namespace std;

int main()
{
    int num1,num2,i;
    cout << "Enter two numbers:" << endl;
    cin>>num1>>num2;
    i=num1;
    while(i<=num2){
    if(i%2==0)
    cout<<i<<endl;
    i++;}
    
    
    return 0;
}