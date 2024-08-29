#include<iostream>
#include<cstdlib>       // stdlib.h
#include<ctime>         // time.h
using namespace std;

// rand();  (it is a pre defined function)  (cstdlib header file is used).   

// int random = offset + (rand() % range);         
// ex- int random = 1 + (rand() % 100);



int main(){
   
    cout << "\n\t\t\t Welcome to GuessTheNUmber game!" << endl;
    cout << "You have to guess a number between 1 and 100. you'll have limited choices based on the level you choose. good Luck!" << endl;

    while (true)
    {
        cout << "\n Enter the difficulty level: \n";
        cout << "1 for easy! \t";
        cout << "2 for medium level! \t";
        cout << "3 for difficult level! \t";
        cout << "0 for ending the game! \n" << endl;

        int difficultyChoice ;
        cout << "Enter the number: ";
        cin >> difficultyChoice;

        srand(time(0));                                  // srand() is a pre defined function , which is used for different random no.
        int secretNumber = 1 + (rand() % 100);           // declare variable
        int playerChoice;

        if (difficultyChoice == 1)
        {
            cout << " \n You have 10 choices for finding the secret number between 1 and 100.";
            int choicesLeft=10;
            for (int i = 1; i <= 10; i++)
            {
                cout << "\n\n Enter thr number: ";
                cin >> playerChoice;
                if (playerChoice == secretNumber)
                {
                    cout << "Well played! you won," << playerChoice << " is the secret number " << endl;
                    cout << "\t\t\t Thanks for playing....." << endl;
                    cout << "Play the game again with us!! \n\n" << endl;
                    break;
                }
                else{
                    cout << "Nope," << playerChoice << " is not the right number \n";
                    if (playerChoice>secretNumber)
                    {
                        cout << "The secret number is smaller than the number you have choosen" << endl;
                    }
                    else{
                        cout << "The secret number is greater than the number you have choosen" << endl;
                    }
                    choicesLeft--;           // choicesLeft=choiceaLeft-1;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft==0)
                    {
                        cout << "You couldn't find the secret number, it was " << secretNumber << ", you lose!! \n\n";
                        cout << "Play the game again to win!!\n\n";
                    }
                    
                }
            }
        }
        else if (difficultyChoice == 2)
        {
            cout << " \n You have 7 choices for finding the secret number between 1 and 100.";
            int choicesLeft=7;
            for (int i = 1; i <= 7; i++)
            {
                cout << "\n\n Enter thr number: ";
                cin >> playerChoice;
                if (playerChoice == secretNumber)
                {
                    cout << "Well played! you won," << playerChoice << "is the secret number " << endl;
                    cout << "\t\t\t Thanks for playing....." << endl;
                    cout << "Play the game again with us!! \n\n" << endl;
                    break;
                }
                else{
                    cout << "Nope," << playerChoice << " is not the right number \n";
                    if (playerChoice>secretNumber)
                    {
                        cout << "The secret is smaller than the number you have choosen" << endl;
                    }
                    else{
                        cout << "The secret is greater than the number you have choosen" << endl;
                    }
                    choicesLeft--;           // choicesLeft=choiceaLeft-1;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft==0)
                    {
                        cout << "You couldn't find the secret number, it was " << secretNumber << ", you lose!! \n\n";
                        cout << "Play the game again to win!!\n\n";
                    }
                    
                }
            }
        }
        else if (difficultyChoice == 3)
        {
            cout << " \n You have 5 choices for finding the secret number between 1 and 100.";
            int choicesLeft=5;
            for (int i = 1; i <= 5; i++)
            {
                cout << "\n\n Enter thr number: ";
                cin >> playerChoice;
                if (playerChoice == secretNumber)
                {
                    cout << "Well played! you won," << playerChoice << "is the secret number " << endl;
                    cout << "\t\t\t Thanks for playing....." << endl;
                    cout << "Play the game again with us!! \n\n" << endl;
                    break;
                }
                else{
                    cout << "Nope," << playerChoice << " is not the right number \n";
                    if (playerChoice>secretNumber)
                    {
                        cout << "The secret is smaller than the number you have choosen" << endl;
                    }
                    else{
                        cout << "The secret is greater than the number you have choosen" << endl;
                    }
                    choicesLeft--;           // choicesLeft=choiceaLeft-1;
                    cout << choicesLeft << " choices left. " << endl;
                    if (choicesLeft==0)
                    {
                        cout << "You couldn't find the secret number, it was " << secretNumber << ", you lose!! \n\n";
                        cout << "Play the game again to win!!\n\n";
                    }
                }
            }
        }
        else if (difficultyChoice == 0)
        {
            exit(0);
        }
        else{
            cout << "Wrong choice, Enter the valid choice to play the game ! (0,1,2,3)" << endl; 
        }
    }
    
return 0 ;
}