#include<iostream>
using namespace std;
int main()
{
float mark1,mark2,mark3,mark4,average;
cout << "Enter 4 Marks" << endl;
cin>>mark1>>mark2>>mark3>>mark4;
average=(mark1+mark2+mark3+mark4);
cout<<average<<endl;
if (average>=50){
cout << "PASS" << endl;
}


return 0;}