#include <string>
#include <sstream>
using namespace std;

class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result;
        int index = 1;

        while (ss >> word) {
            char first = tolower(word[0]);

            if (first=='a'||first=='e'||first=='i'||first=='o'||first=='u') {
                word = word + "ma";
            } else {
                word = word.substr(1) + word[0] + "ma";
            }

            word += string(index, 'a');

            if (!result.empty()) result += " ";
            result += word;

            index++;
        }

        return result;
    }
};