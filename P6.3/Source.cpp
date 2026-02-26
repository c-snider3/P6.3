/*Average and sdev calculator - Collin Snider*/
#include <iostream>
using namespace std;

int main()
{
	double numA = 0;			//input number
	double numB = 0;			//running total of numbers input
	double average = 0;			//average of numbers input
	double sdev = 0;			//standard deviation of numbers input
	int count = 0;				//number of inputs
	const int SIZE = 100;		//max number of inputs
	double nums[SIZE];			//stored values

	while (1 == 1)				//run until break
	{
		cout << "Enter a number or Q to quit: ";
		cin >> numA;
		if (cin.fail())					//break
		{
			break;
		}

		nums[count] = numA;				//store value in array
		numB += numA;	
		count++;						//increment count
	}

	if (count == 0)						//check for quitting without inputting data
	{
		cout << "No data to process!" << endl;
		return 0;
	}

	average = numB / count;
	
	for (int i = 0; i < count; i++)								//calculate sdev
	{
		sdev += (nums[i] - average) * (nums[i] - average);		//increment to retrieve the array
	}
	sdev = sqrt(sdev / (count - 1));							//sdev formula
	cout << "Count: " << count << endl;
	cout << "Average: " << average << endl;
	cout << "Standard Deviation: " << sdev << endl;				//output results



}