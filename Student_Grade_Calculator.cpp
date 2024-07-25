
#include<iostream>
#include<math.h>
using namespace std;
int main()
{                                                                        // TASK 07
int n;
float mark,total=0,avg;
string name;
cout<<"\t\t ...WELCOME TO THE STUDENT GRADE CALCULATOR...\n"<<endl;                                                                //TASK 07
cout<<"Enter number of Subjects:";
cin>>n;
cout<<"Enter the name of"<<n<<"subjects:";
for(int i=0;i<n;i++)
{
cin>>name;
cout<<endl;
}

cout<<"Enter marks obtained in "<<n<<"subjects:";

for(int i=0;i<n;i++)
{
cin>>mark;

if(mark>85)
{   
    cout<<"GRADE IN THIS SUBJECT :A ";
    cout<<endl;
}
else if(mark>60 &&mark<85)
{ 
    cout<<"GRADE IN THIS SUBJECT :B ";
     cout<<endl;
}
else if(mark>35 &&mark<60)
{  
    cout<<"GRADE IN THIS SUBJECT :C";
     cout<<endl;
}

else
{     
   cout<<"GRADE IN THIS SUBJECT :D";
    cout<<endl;
}

total+=mark; 

}

avg=total/n;
cout<<endl;
cout<<"AVERAGE OF MARKS:"<<" "<<avg;
cout<<endl;

if(avg>=91 && avg<=100)
        cout<<" AVERAGE GRADE:A1";
    else if(avg>=81 && avg<91)
        cout<<"  AVERAGE GRADE:A2";
    else if(avg>=71 && avg<81)
        cout<<" AVERAGE GRADE:B1";
    else if(avg>=61 && avg<71)
        cout<<" AVERAGE GRADE:B2";
    else if(avg>=51 && avg<61)
        cout<<" AVERAGE GRADE:C1";
    else if(avg>=41 && avg<51)
        cout<<" AVERAGE GRADE:C2";
    else if(avg>=33 && avg<41)
        cout<<" AVERAGE GRADE:D";
    else if(avg>=21 && avg<33)
        cout<<" AVERAGE GRADE:E";
     else if(avg>=0 && avg<21)
     cout<<"FAIL";
     else
     cout<<"INVALID";
     return 0;

} 