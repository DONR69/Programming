#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string word;
	double chance = 1;
	int len = 0;
	char words[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'x' };
	vector<string> s1 = { "the", "dude", "is", "the", "big", "lebowski" };
	double letters[26] = {};

	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s1[i].size(); j++) {
			len++;
			for (int k = 0; k < 26; k++) {
				if (s1[i][j] == words[k]) letters[k]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) letters[i] = letters[i] / len;

	cin >> word;

	for (int i = 0; i < word.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if (word[i] == words[j]) chance = chance * letters[j];
		}
	}

	cout.precision(16);
	cout << chance << endl;
	return(0);
}