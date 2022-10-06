/* Authors: Clinton Nguyen (cdn0116), Manuel Osorto (meo0106), Aaron Millman (amm1076), Jaxon Olson (jco0120)
   Instructor:  Shrestha
   Description: CSCE 1030 Project 01
*/

#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int length;
    int choice;

    enum Choices{Square = 1, Triangle = 2, Pentagon = 3, Sentence = 4, Quit = 5};

    cout << "Enter size: "; cin >> length;
    while (length % 2 != 1) //length entered must be odd otherwise keep looping
    {
        cout << "You must enter an odd number." << endl;
        cout << "Enter size: "; cin >> length;
    }

    do
    {
        srand(time(NULL)); //seed random number generator
        char ASCIIchar = (rand() % 32) + 33; //ASCII character to be used for shape generation

        cout << "What shape do you want to generate:\n1.Square\n2.Triangle\n3.Pentagon\n4.Sentence\n5.Quit" << endl;
        cout << "Enter your choice: "; cin >> choice;

        switch (choice)
        {
            case (Square): //user entered 1
            {
                for (int i = 0; i <= length; i++) //regenerate squares by incrementing length
                {
                    system("clear"); //clear output each time new generation occurs
                    int subLength = i + 1; //generate squares of incremental length according to i
                    for(int h = 1; h < subLength; h++) //generate vertical row
                    {
                        cout << ASCIIchar;
                        for(int v = 1; v < subLength - 1; v++) //generate horizontal row for every vertical row
                        {
                            cout << ASCIIchar;
                        }
                        cout << endl;
                    }
                    sleep(1); //delay after each generated square
                }
                break;
            }
            case (Triangle): //user entered 2
            {
                break;
            }
            case (Pentagon): //user entered 3
            {
                break;
            }
            case (Sentence): //user entered 4
            {
                break;
            }
            case (Quit): //user entered 5
            {
                cout << "Game over." << endl;
                return 0;
            }
            default: //user entered an incorrect choice
            {
                cout << "Wrong shape." << endl;
                break;
            }
        }
        cout << "Do you want to repeat? Y/N: ";
        char userContinue;
        cin >> userContinue;
        userContinue = toupper(userContinue);
        if(userContinue == 'Y')
        {
            continue;
        }
        else
        {
            return 0; //ends the program if user does not choose to repeat
        }
    }
    while(true);

    return 0;
}