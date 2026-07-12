class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int st=0,end=n-1;
        int maxarea=0;
        while(st<end){
            int l=min(heights[st],heights[end]);
            int w=end-st;
            int area=l*w;
            maxarea=max(maxarea,area);
            if(heights[st]<heights[end]){
                st++;
            }else{
                end--;
            }

            
            
            
        }
        return maxarea;
        
    }
};
