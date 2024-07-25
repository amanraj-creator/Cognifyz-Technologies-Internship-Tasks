

#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
                                                   //TASK 06
string str;
cout<<"Enter a word or phrase:";
cin>>str;

int n=str.length();
for(int i=0;i<n/2;i++)
{
if(str[i]!=str[n-i-1])
{
   cout<<"Not a palindrome string";
}
else
{
cout<<"Palindrome string";
}
}
return 0;
}








