#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    string word;
    int max = 0;
    bool same = false;
    char answer;
    vector <int> word_count(26, 0);

    cin >> word;
    
    for(int i = 0 ; i < word.length() ; i++)
    {
        word[i] = tolower(word[i]);
        word_count[word[i] - 'a']++;
    }

    max = word_count[0];
    answer = 'A';
    for(int i = 0 ; i < word_count.size() ; i++)
    {
        if(max < word_count[i])
        {
            max = word_count[i];
            same = false;
            answer = 'A' + i;
        }
        else if(max == word_count[i] && i != 0)
            same = true;
    }

    if(same == true)
        cout << "?" << endl;
    else
        cout << answer << endl;

    return 0;
}