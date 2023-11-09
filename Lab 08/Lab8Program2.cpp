#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ifstream fin("Lab8_2data.txt");
    string text;
    vector<string> extractedWords;

    if (fin.fail()) {
        cout << "Unable to read the file.";
        return -1;
    }

    getline(fin, text);

    // Find and extract words inside parentheses
    size_t pos = 0;
    while ((pos = text.find('(', pos)) != string::npos) {
        size_t endPos = text.find(')', pos);
        if (endPos != string::npos) {
            string word = text.substr(pos + 1, endPos - pos - 1);
            extractedWords.push_back(word);
            pos = endPos + 1;
        }
    }

    fin.close();

    // Output the extracted words
    cout << "Text: " << text << endl;
    cout << "Extracted Word: ";
    for (size_t i = 0; i < extractedWords.size(); i++) {
        cout << extractedWords.at(i);
        if (i < extractedWords.size() - 1) {
            cout << ' ';
        }
    }
    cout << endl;

    return 0;
}
