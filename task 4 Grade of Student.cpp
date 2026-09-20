#include <iostream>
using namespace std;
int main()
{
double marks;
cout <<"Enter Your Marks."<<endl;
cin >> marks;
if (marks >=90) cout <<"Grade : A"<<endl;
else if (marks >=75) cout <<"Grade : B"<<endl;
else if (marks >=65) cout <<"Grade : C"<<endl;
else if (marks >=55) cout <<"Grade : D"<<endl;
else cout <<" Grade : F" << endl;


return 0;
}