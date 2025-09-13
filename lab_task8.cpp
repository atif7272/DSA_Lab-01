#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> findAllSubstrings(const string& text, const string& pattern) {
    vector<int> indices;

    if (pattern.empty()) {
        indices.push_back(0);
        return indices;
    }
    if (pattern.length() > text.length()) {
        return indices;
    }

    for (int i = 0; i <= text.length() - pattern.length(); i++) {
        int j;
        for (j = 0; j < pattern.length(); j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }
        if (j == pattern.length()) {
            indices.push_back(i);  // store the match index
        }
    }
    return indices;
}

int main() {
    string text, pattern;

    cout << "Enter the main text: ";
    getline(cin, text);

    cout << "Enter the pattern to search: ";
    getline(cin, pattern);

    vector<int> results = findAllSubstrings(text, pattern);

    if (!results.empty()) {
        cout << "Pattern found at indices: ";
        for (int idx : results) {
            cout << idx << " ";
        }
        cout << endl;
    } else {
        cout << "Pattern not found in the text." << endl;
    }

    return 0;
}
