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
    while (length % 2 != 1)
    {
        cout << "You must enter an odd number." << endl;
        cout << "Enter size: "; cin >> length;
    }


    srand(time(NULL)); //seed random number generator
    int ASCIIvalue = (rand() % 32) + 33;

    cout << "What shape do you want to generate:\n1.Square\n2.Triange\n3.Pentagon\n4.Sentence\n5.Quit" << endl;
    cout << "Enter your choice: "; cin >> choice;

    do {
        switch (choice)
        {
            case (Square): //user entered 1
            {
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
                break;
            }
            default: //user entered an incorrect choice
            {
                cout << "Wrong shape.";
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
            break;
        }
    }
    while(true);



    return 0;
}