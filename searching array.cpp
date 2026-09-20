#include<iostream>
using namespace std;
int main()
{
 int array[10]={10,20,30,40,50,60,70,80,90,100};
 int i,n,location=-1;
 cout << "Enter value to Find= ";
 cin>>n;
 for(i=1;i<=10;i++){
 if (array[i]==n)
 location=i;
  }
  if(location==-1)
  cout << "Value not fount in this array." << endl;
   else 
   cout << "value fount in the index " <<location<<endl;
    return 0;
}