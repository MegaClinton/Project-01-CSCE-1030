#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int length;
    cout<<"Enter length of the shape:";
    cin>>length;
    srand(time(NULL)); //seed random number generator
    system("clear");
    char ASCIIchar = (rand() % 32) + 33;
    
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
	
	

return 0;
}
