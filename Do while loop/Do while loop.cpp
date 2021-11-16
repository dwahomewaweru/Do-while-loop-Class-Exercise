// Do While Loop Class Exercise.cpp 
// Basic structure of a do while loop

#include <iostream>
using namespace std;

int main() {
	// Declare and initialize variable
	int number;
	int sum{};

	do {
		cout << "Please input a valid number to view sum. Enter 0 to stop:\n ";
		cin >> number;
		sum += number;
	} while (number != 0);
	cout << " Sum is of entered number is : " << sum<<endl;
	//Output when the user enters a 0 to end the loop
	return 0;
}