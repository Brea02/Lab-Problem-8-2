//Lab Problem 8-2 
#include<iostream>
#include<string>

using namespace std;

//function prototype
int countWords(string str);

int main() {
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q") break;
		cout << "Word count: " << countWords(str) << endl;
	}
}


//function definiton
int countWords(string str) {
	int num_char = str.length();
	int num_last = str.length() - 1;

	int words = 1;
	int x = 0;

	for (x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (cut == " ") {
			words++;
		}
		string check = (str.substr(x, 1) + str.substr((x + 1), 1));
		if (check == "  ") {
			words--;
		}


	}

	return words;
}


/*
* works if theres no spaces to mess it up
int countWords(string str) {
	int num_char = str.length();
	int num_last = str.length() - 1;

	int words = 1;
	int x = 0;

	for (x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (cut == " ") {
			words++

		}

	}

	return words;
}*/