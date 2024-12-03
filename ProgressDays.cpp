#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Number of Saturday's Marathons: ";
	cin >> size;
	int running[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Miles for Saturday " << i + 1<<": ";
		cin >> running[i];
	}

	int counter = 0;
	for (int i = 1; i < size; i++)
	{
		if(running[i] > running[i-1])      
		{
			counter = counter + 1;
		}
	}
	cout << "Progress Days are: " << counter;
	return 0;
}

// LOGIC BEHIND CODE
// running[i] at int i =1 means that starting from index 1 and not from index 0 
// running[i-1] at int i=1 means that starting from index 0 because 1-1=0 so it becomes running[0]
// comparing first element and zero element of index and if first is greater than zeroth element then counter will count 1 in it