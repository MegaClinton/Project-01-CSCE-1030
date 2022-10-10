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
        cout << "Enter your choice: ";
        int num;
        cin >> num;
        Choices choice = static_cast<Choices>(num);

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
                system("clear");
                for(int i=0; i < length; i++) //
                {
                    for (int s=1; s<length-i; s++) //For loop to add spaces.
                    {
                        cout<<" ";
                    }
                    for( int j =1; j<=((i*2)+1);j++) //The increments of 2 for each line.
                    {
                        cout<<ASCIIchar;
                    }
                    cout<<endl;
                    sleep(1); //delay after each generated triangle
                }
                break;
            }
            case (Pentagon): //user entered 3
            {
                system("clear");
                for(int i=0; i < length; i++) //
                {
                    //For loop to add spaces.
                    for (int s=1; s<length-i; s++)
                    {
                        cout<<" ";
                    }
                    // the increments of 2 for each line.
                    for( int j =1; j<=((i*2)+1);j++)
                    {
                        cout<<ASCIIchar;
                    }
                    cout<<endl;
                    sleep(1);
                }
                for(int l = 1; l<=length-1;l++) //length of the rectangle.
                {
                    for(int w=1;w<=length*2-1;w++) // width of the rectangle to match the triangle.
                    {
                        cout<<ASCIIchar;
                    }
                    cout<<endl;
                    sleep(1);
                }
                break;
            }
            case (Sentence): //user entered 4
            {
                string str;

                cout << "Enter sentence: ";

                cin.ignore();
                getline(cin, str);

                int count = 0; //integer used to keep track of amount of lines needed
                for (int i = 0; i < str.length(); ++i)
                {
                    system("clear");

                    for(int v = 0; v < count; v++)
                    {
                        cout<<endl;
                    }
                    char ch = str.at(i);

                    if (isdigit(ch))
                    {
                        cout << str << endl;
                        str.erase(i, 1); //take out digit from str
                        i--; //decrement i to account for length being decreased by 1
                        count++; //increment count for every digit removed
                    }
                    else
                    {
                        continue;
                    }
                    sleep(1);
                }

                system("clear");

                for(int v = 0; v < count; v++)
                {
                    cout<<endl;
                }
                cout << str << endl;
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
            continue; //continues game
        }
        else
        {
            return 0; //ends the program if user does not choose to repeat
        }
    }
    while(true);

    return 0;
}
