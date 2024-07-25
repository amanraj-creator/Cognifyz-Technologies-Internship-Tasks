
                                                                                  

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{                                           // TASK 03 (COGNIFYZ TECHNOLOGY INTERNSHIP)
int n,a=0,b=1,c;
int sum=1;
cout<<"Enter Number:";
cin>>n;
if(n==0)
return 0;
if(n==1)
return 1;
else 
{
int a=0,b=1;
for(int i=2;i<=n;i++)
{
int c=a+b;
sum+=c;
a=b;
b=c;
}
cout<<"Sum of series is:"<<sum;
return 0;
}
}










