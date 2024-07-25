#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{                                                         //TASK 04
    int OriginalNumber;
    int Guess;
    int chances = 0;
    srand(time(0)); 
    OriginalNumber = rand() % 100 + 1; 
    cout<<endl;
    cout << "\t\t...Welcome to the Guessing Game...\n\n"<<"  ";
    cout<<"\t\tYou have limited choices"<<" ";
    cout<<"Good Luck!"<<endl; 
    do
    {
        cout <<"\t\t" "Enter your guess between 0 and 100:";
        cin >> Guess; 
        chances++;

        if (Guess > OriginalNumber){
            cout << "The "<<Guess<<" is higher than OriginalNumber!\n\n";
        }
        else if (Guess < OriginalNumber){
            cout << "The "<<Guess<<" is lower than OriginalNumber!\n\n";
        }
        else{
            cout << "\nGreat! You got the right guess "<<Guess <<"in "<< chances << " tries!\n";
            cout<<"Thanks for playing :)"<<"  "<<"Play again with us!";
        }
    } 
        while (Guess != OriginalNumber);

	return 0;
}

