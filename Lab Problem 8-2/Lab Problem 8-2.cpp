//Lab Problem 8-2 
#include<iostream>
#include<string>

using namespace std;

//function prototype
int countWords(string str);

int main() {
	cout << "Enter a string: ";
	string str;
	getline(cin, str);
	cout << "Word count: " << countWords(str) << endl;
}


//function definiton
int countWords(string str) {
	int num_char = str.length();
	int num_last = str.length() - 1;

	int words = 1;
	int x = 0;

	for (x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (cut == " " ) {
			words++;

		}

	}

	return words;
}


/*int countVowel(string str) {
	int num_char = str.length();
	string last_character = str.substr(str.length() - 1, 1);
	int num_last = str.length() - 1;

	int vowels = 0;
	int x = 0;
	
	for (x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (cut == "a" || cut == "A" || cut == "e" || cut == "E" || cut == "i" || cut == "I" || cut == "o" || cut == "O" ||cut == "u" || cut == "U") {
			vowels++;
	
		}
		
	}

	return vowels;
}*/