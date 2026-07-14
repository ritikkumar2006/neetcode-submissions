class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int maxcount=0;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp.clear();
            int count=0;
            for(int j=i;j<n;j++){
                if(!mpp.count(s[j])){
                    mpp[s[j]]++;
                    count++;
                    maxcount=max(count,maxcount);
                }else{
                    break;
                }

            }
        }  
        return maxcount;
    }
};
