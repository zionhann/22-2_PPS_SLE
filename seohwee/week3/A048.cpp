#include <iostream>
#include <string>

using namespace std;

int count = 0; 
void checker(string a);

int main(void){
	int n;
	string str;

  cin >> n;

	for (int i=0; i<n; i++){
		cin >> str;
		checker(str);
	}
	cout << count;
}


void checker(string a){
	int size = a.size();
	
	for (int i=0; i<size-2; i++){
		if (a[i] != a[i+1]) {
			for (int j=i+2; j<size; j++){
				if (a[j]==a[i]) return; 
      }
		}
	}
	count++; 
}
