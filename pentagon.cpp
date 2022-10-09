#include <iostream>
using namespace std;
	
	
int main ()
{
int i, j;
int length;
cout<<"Enter length of the shape:";
cin>> length;
srand(time(NULL)); //seed random number generator
        char ASCIIchar = (rand() % 32) + 33; 
// trianlge part
	for(i =1;i <= length-1;i++)
	{
		for(j=0;j<=length;j++) // horizontal adjustment
		{
			int subLength =0;
			if((i+j)>=(length+1))
			{
				cout<<ASCIIchar << " ";
			}
			else
			{
				cout<<" ";
			} 
		
		}
		cout<<endl;
	}
// rectangle part
	 for(int p=1; p<=length;p++)
	{
		for(int c =1; c<=length +1;c++)
		{
			cout << ASCIIchar << " ";
		}
		cout<<endl;
	} 
	
		

	












	return 0;
}
