

#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "please enter the number that you wan the fibonacci numeber sequence to end at" << endl;	
	cin >>x;	
	int array[3];
	if(x < 0)
	{
		array[0] = 0;
		array[1] = -1;
		array[2] = -1;	
		while(array[2] >= x || array[2] >= x)
		{
			cout << array[2] << endl;			
			array[0] = array[1];
			array[1] = array[2];		
			array[2] = array[0] + array[1];
		}  
	}
	if(x > 0)
	{
		array[0] = 0;
		array[1] = 1;
		array[2] = 1;	
		while(array[2] <= x || array[2] <= x)
		{
			cout << array[2] << endl;			
			array[0] = array[1];
			array[1] = array[2];		
			array[2] = array[0] + array[1];
		}  
	}
	if( x == 0)
	{
		cout << "stop trying to see if you can break my code and use it right" << endl;
	}
}
