#include<iostream>
using namespace std;

int main()
{
    int a[10],i,n;
    cout<<"ENTER the size of array  :";
    cin>>n;
  //  cout<<" NUMBERS ARE :";
    for (int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cout<<"Your Entered numbers are :"<<a[i]<<endl;
    return 0;

}