#include<iostream>
#include<math.h>
using namespace std;
int main()
{                                                    //TASK 02 (COGNIFYZ TECHNOLOGY INTERNSHIP)

cout<<"CALCULATOR"<<endl;
cout<<"1.ADDITION\n"<<"2.SUBSTRACTION\n"<<"3.MULTIPLICATION\n"<<"4.DIVISION\n";

int OPERATION;
cout<<"ENTER TYPE OF OPERATION";
cin>>OPERATION;

int a,b,c;
cout<<"ENTER TWO NUMBERS:";
cin>>a>>b;

switch(OPERATION)
{
case 1: c=a+b;
       break;
case 2: c=a-b;
       break;

case 3: c=a*b;
       break;

 case 4: c=a/b;
       break;      

}
cout<<"RESULT IS:"<<c<<endl;
return 0;
}






