#include<iostream>
#include<time.h>
#include <cstdlib>
#include<string>
#include <algorithm>
using namespace std;

int case_insensitive_match(string s1, string s2) {
	
	transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
	transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
	if (s1.compare(s2) == 0)
		return 1; 
	return 0; 
}
int main() {

	string words[3] = { "computer","console","desktop" };
	string word, userInput[100];
	int random;
	char user_letter;

	srand(time(0));
	random = rand() % 3;
	word = words[random];

	for (int i = 0; i < word.size(); i++) {
		cout << "-" << '\t';
	}
	cout << "enter a letter:" << endl;
	cin >> user_letter;


	for (int i = 0; i < word.size(); i++) {
		if (user_letter == word[i]) {
			userInput[i] = user_letter;
		}
	}
	for (int i = 0; i < word.size(); i++)
	{
		cout << userInput;
	

	if (word == userInput[i]) {
		break;
	}
}
		string s1 = word;
			string s2 = userInput[100];
	
		if (case_insensitive_match(s1, s2)) {
			cout << "you won";
		}
		else {
			cout << "you lost";
		}
	
	system("pause");
	return 0;
}