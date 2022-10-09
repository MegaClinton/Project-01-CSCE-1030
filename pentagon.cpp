#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int length;
    cout<<"Enter length of the shape:";
    cin>>length;
    srand(time(NULL)); //seed random number generator
    
    char ASCIIchar = (rand() % 32) + 33;
    
    //Variable to initialize the number of spaces in the first line.
    //This is also used to track the number of spaces in subsequent lines.
    int spaces = length+(length-1);
    
    for(int i=0; i < length; i++) //Update '<='operator to '<' so the lines match the input
    {
        //For loop to add spaces.
	 
        for (int s=1; s<spaces; s++)
        {
		          
		 cout <<" ";
        }
        for (int j=1; j<=((i*2)+1);j++)
        {
            cout <<" "<<ASCIIchar;
        }
        cout<< endl;
        sleep(1); 
        spaces=spaces-2; //Decrement number of spaces by 2
    }

	for(int i=1; i<=length;i++)
	{
		for(int w =1; w<=length;w++)
		{
			cout<<" "<< ASCIIchar;
		}
		cout<<endl;
	}
	sleep(1);
    return 0;
}
