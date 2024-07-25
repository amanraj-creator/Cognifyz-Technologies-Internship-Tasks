#include<iostream>
#include <cstdlib>
#include <ctime>
#include<conio.h>                        

using namespace std;                                            //TASK 09

int main()
{
  cout<<"\t\t  ...  WELCOME TO THE ROCK-PAPER-SCISSORS GAME ...  "<<endl;
  string playerName;
  cout<<"ENTER YOUR NAME:";
  cin>>playerName;

            system("cls");

 int rounds;
 cout<<playerName<<" "<<"HOW MANY ROUNDS YOU WANT TO PLAY?";
 cin>>rounds;

 int PlayerScore=0,ComputerScore=0;
 for(int round=1;round<rounds;round++)
 {
      system("cls");
 int PlayerChoice,ComputerChoice;
 cout<<"Round Number:"<<round<<"/"<<rounds<<endl;
 cout<<playerName<<"score="<<PlayerScore<<endl;
 cout<<"ComputerScore"<<ComputerScore<<endl;

cout<<"1.ROCK"<<endl;
cout<<"2.PAPER"<<endl;
cout<<"3.SCISSOR"<<endl;

do{
cout<<"Select your Choice:";
cin>>PlayerChoice;
}
while(PlayerChoice!=1 && PlayerChoice!=2 && PlayerChoice!=3);

srand(time(0));
ComputerChoice=(rand()%2)+1;

if(PlayerChoice==1 && ComputerChoice==3)
{
    cout<<"CONGRATULATIONS! YOU WIN :)"<<"Rock smashes Scissor"<<endl;
    PlayerScore++;

}
else if(PlayerChoice==2 && ComputerChoice==1)
{
cout<<"CONGRATULATIONS! YOU WIN :)"<<"Paper wraps Rock"<<endl;
    PlayerScore++;
}
else if(PlayerChoice==3 && ComputerChoice==2)
{
   cout<<"CONGRATULATIONS! YOU WIN :)"<<"Scissors cut Paper"<<endl;
    PlayerScore++; 
}
else if(PlayerChoice==ComputerChoice)
{
    cout<<"GAME DRAW!"<<endl;
}
else
{
    cout<<"COMPUTER WINS!"<<endl;
    ComputerScore++;
}

}

cout<<"PLEASE ENTER ANY KEY TO CONTINUE..."<<endl;
getch();

if(ComputerScore==PlayerScore)
{
    cout<<"GAME IS DRAWN!"<<endl;
}

else if(PlayerScore>ComputerScore)
{
    cout<<playerName<<"CONGRATS! YOU WON THE GAME..."<<endl;

}
else
{
    cout<<"COMPUTER WON THE GAME!"<<endl;

}

return 0;

}
















