//Megan Coumbe

#include <iostream>
using namespace std; 
double Median(int *array, int numElements)
{
	int sum = 0; 
	for (int i = 0; i < numElements; i++)
	{
		sum += array[i];
	}
	double total = (double)sum / (double)numElements;
	return (total);
}
int main()
{
	//Initializing
	int *arr; 
	int size = 4;
	int num = 2;
	arr = new int[size];
	//Premade EX
	cout << "Pre made A array of values of 2: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = num;
	}
	double average = Median(arr, size);
	cout << average << endl;
	//Prompt Size
	cout << "A array of user choice: ";
	//Input
	for (int i = 0; i < size; i++)
	{
		cin >> num;
		arr[i] = num;
	}
	//Call
	Median(arr, size);
	//Print
	cout << Median(arr, size) << endl;
}
