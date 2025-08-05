#include <bits/stdc++.h>
using namespace std;

int main(){
    string para;
    cout << "Enter a paragraph: ";
    getline(cin, para);

    stringstream ss(para);
    string word;
    map<string, int> wordCount;
    while (ss >> word) {
        transform(word.begin(), word.end(), word.begin(), ::tolower);
        wordCount[word]++;
    }
    cout << "Word Count:\n";
    for (const auto& pair : wordCount) {
        cout << pair.first << ": " << pair.second << endl;
    }
    cout << "Total unique words: " << wordCount.size() << endl;
    return 0;
}