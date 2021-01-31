#include <iostream>

//Check to see if a string has the same amount of 'x's and 'o's. 
//The method must return a boolean and be case insensitive. The string can contain any char.

bool XO(const std::string& str)
{
	int c = 0; //setup an initial counter
	for(unsigned long i = 0; i < str.length(); i++) { //loop each character
		switch(tolower(str[i])) { //convert to lower case
			case 'x': c++; break; //increment on x's 
			case 'o': c--; break; //decrement on y's
		}
	}
	if( c == 0 ) { return true; } //if the count is zero even x's and o's
	return false;
}

int main() {
	std::cout << "Exs and Ohs\n";

	std::cout << "\nA - State: " << XO("ooxx"); // -> true
	std::cout << "\nB - State: " << XO("xooxx"); // -> false
	std::cout << "\nC - State: " << XO("ooxXm"); // -> true
	std::cout << "\nD - State: " << XO("zpzpzpp"); // -> true
	std::cout << "\nE - State: " << XO("zzoo"); // -> false

	std::cout << "\n";
}
