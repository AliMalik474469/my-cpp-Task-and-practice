#include <iostream>
using namespace std;
int main()
{
int units;
cout<<"Enter your units.";
cin>>units;
if(units>=300)
cout<<"you used high amount of electricty ";
 else if(units<=299)
cout <<"you used normal amount of electricty"; 
return 0;
}