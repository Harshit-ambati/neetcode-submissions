class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        bool found = false;
        
        int n = s1.size();
        int i = 0;
        int j = i + n;
        while(j<=s2.size()){
                    unordered_map<char,int>map1;
                            bool ans = true;

            for(int k = i;k<j;k++){
                map1[s2[k]]++;
            }
            for(int k = 0;k<n;k++){
                map1[s1[k]]--;
            }
            for(auto &[element,count] : map1){
                if(count != 0){
                    ans = false;
                }
            }
            if(ans == true){
                found = true;
                break;
            }
            i++;
            j++;
        }
        return found;
    }
};
