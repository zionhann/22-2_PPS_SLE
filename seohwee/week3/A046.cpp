#include <iostream>

using namespace std;

int main(void) {
	int lastname[26];
  int predaja = 26;
	char player;
  string name;
	int N;

	for (int i=0; i<26; i++) {
		lastname[i]=0;
	}

	cin >> N;
	
	for (int i=0; i<N; i++) {
		cin >> name;
		lastname[name[0]-'a']++;
	}

	for (int i=0; i<26; i++) {
		player = ' ';
		if (lastname[i] >= 5) {
			player = i+'a';
			cout << player;
		}
		else predaja--;
	}
	if (!predaja) cout << "PREDAJA";
}
