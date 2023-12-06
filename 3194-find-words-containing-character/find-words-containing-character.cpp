class Solution {
public:
    bool contains(const std::string& str, char targetChar) {
    // Use the find() member function to check
    // if the character exists
    return str.find(targetChar) != std::string::npos;
    }
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for (int i = 0; i < words.size(); i++)
        {
            if (contains(words[i], x)) ans.push_back(i);
        }
        return ans;
    }
};