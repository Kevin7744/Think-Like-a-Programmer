/*
* Problem: Decode a message
* A message has been encoded as a text stream that is to be read charcter by character. The stream contains a series of comma-deli
* mited integers, each positive number. However, the character represented by a particular integer depends on the currrent decoding mode. 
* There are three modes: Uppercase, lowecase and punctuation.
*/

#include <iostream>
using std::cin;
using std::cout;

// Read character by character until we reach an end of line
char digitChar;
do {
	digitChar = cin.get();
	int number = (digitChar - '0');
	digitChar = cin.get();
	while ((digitChar != 10) && (digitChar != ',')) {
		number = number * 10 + (digitChar - '0');
		digitChar = cin.get();
	}
	cout << "Numbered entered: " << number << "\n";
} while (digitChar != 10);
// Convert a series of characters representing a number to an integer

// Convert an integer 1-26 into an uppercase letter.

// Convert an integer 1-26 into a lowercase letter

// Convert an integer 1-8 into a punctuation sysmbol

// Track a decoding mode.
