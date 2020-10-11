#include <iostream>

using namespace std;

class Solution {
public:
    string removeDuplicateLetters(string s) {
        int count[128] {};
        for (char c : s) {
            ++count[c]; 
        }
        bool in_result[128] {}; 
        string result = " "; 
        for (char c : s) {
            --count[c]; 
            if (in_result[c]) {
                continue;
            }
            while (c < result.back() && count[result.back()] > 0) {
                in_result[result.back()] = false; 
                result.pop_back(); 
            }
            result += c; 
            in_result[c] = true;
        }
        return result.substr(1);
    }
};