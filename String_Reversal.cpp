#include<iostream>
#include<algorithm>
#include<string>            
                                                            //  TASK 01  (COGNIFYZ TECHNOLOGY INTERNSHIP)
using namespace std;

int main() 
{

string s="Cognifyz Technology";
int n=s.length();
for(int i=0;i<n/2;i++)
{
swap( s[i],s[n-i-1] );
}
cout<<"Reversed string is:"<<" "<<s<<endl;


return 0;

}
 