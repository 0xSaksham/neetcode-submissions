class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, maxLen = 0;
        unordered_set<char> charSet;

        for(int j=0; j<s.size(); ++j){
            while(charSet.find(s[j]) != charSet.end()){
                charSet.erase(s[i]);
                ++i;
            }
            charSet.insert(s[j]);
            maxLen = max(maxLen, j-i+1);
        }

        return maxLen;
        
    }
};
