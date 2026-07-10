class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        int maxcount=0;
        for(int i=0;i<n;i++){
            int count=0;
            int need=nums[i];
            while(mpp.count(need)){
                count++;
                need=need+1;
            }
            maxcount=max(count,maxcount);

        }
        return maxcount;

    }
};
