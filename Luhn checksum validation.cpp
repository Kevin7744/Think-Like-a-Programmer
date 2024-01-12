#include <iostream>
using std::cin;
using std::cout;

int doubleDigit(int digit) {
	int doubleDigit = digit * 2;
	int sum;
	if (doubleDigit > 10) sum = 1 + doubleDigit %10;
	else sum = doubleDigit;
	return sum;
}


char digit;
int checksum = 0;
cout << "Enter a six-digit number: ";
for (int position = 1; position <= 6; position++){
	cin >> digit;
	checksum += digit - '0';
}
cout << "checksum is " << checksum << ".\n";
if (checksum % 10 == 0){
	cout << "checksum is divisible by 10. Valid. \n";
} else {
	cout << "checksum is not divisible by 10. Invalid. \n";
}

// check if the number is odd or even
for (int position = 1; position <= 6; position++){
	cin >> digit;
	if (position % 2 == 0) checksum += digit - '0';
		else checksum += doubleDigit(digit - '0');
}


// check for positive and negative numbers
int number;
int positiveCount = 0;
int negativeCount = 0;
for (int i = 1; i <= 10; i++) {
	cin >> number;
	if (number > 0) positiveCount++;
	if (number < 0) negativeCount++;
}
char response;
cout << "Do you want the (p)ositive or (n)egative Count?";
cin >> response;
if (response == 'p')
	cout << "Positive count is " << positiveCount << "\n";
if (response == 'n')
	cout << "Negative count is " << negativeCount << "\n";
