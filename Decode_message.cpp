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
char outputCharacter;
enum modeType { UPPERCASE, LOWERCASE, PUNCUATION };
modeType mode = UPPERCASE;
char digitChar;

do {
    digitChar = cin.get();
    int number = (digitChar - '0');
    digitChar = cin.get();

    while ((digitChar != 10) && (digitChar != ',')) {
        number = number * 10 + (digitChar - '0');
        digitChar = cin.get();
    }

    switch (mode) {
        case UPPERCASE:
            number = number % 27;
            outputCharacter = number + 'A' - 1;
            if (number == 0) {
                mode = LOWERCASE;
                continue;
            }
            break;
        case LOWERCASE:
            number = number % 27;
            outputCharacter = number + 'a' - 1;
            if (number == 0) {
                mode = PUNCUATION;
                continue;
            }
            break;
        case PUNCUATION:
            number = number % 9;
            switch (number) {
                case 1: outputCharacter = '!'; break;
                case 2: outputCharacter = '?'; break;
                case 3: outputCharacter = ','; break;
                case 4: outputCharacter = '.'; break;
                case 5: outputCharacter = ' '; break;
                case 6: outputCharacter = ';'; break;
                case 7: outputCharacter = '"'; break;
                case 8: outputCharacter = '\''; break;
            }
            if (number == 0) {
                mode = UPPERCASE;
                continue;
            }
            break;
    }

    cout << outputCharacter;
} while (digitChar != 10);

cout << "\n";

return 0;