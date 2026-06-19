class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int>mpp1;
        if (s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++) {
            mpp1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            mpp1[t[i]]--;
        }
        for(auto it:mpp1){
            if(it.second>0){
                return false;
            }

        }
        return true;
        
    }
};
