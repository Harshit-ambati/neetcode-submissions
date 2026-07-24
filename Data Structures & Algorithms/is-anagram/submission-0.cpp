class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>freq;
        if(s.size()!= t.size())return false;
        for(char ch : s){
            freq[ch]++;
        }
        for(char ch : t){
            freq[ch]--;
        }
        for(auto x : freq){
            if(x.second != 0){
                return false;
            }
        }
        return true;
    }
};
