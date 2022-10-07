class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        int g;
        vector<int> ans(end+1);
        int k = ans.size()-1;
        while(start<=end){
            if(nums[start]<0) nums[start] = -nums[start];
            if(nums[end]<0) nums[end] = -nums[end];
            if(nums[start]>nums[end]){
                ans[k] = nums[start]*nums[start];
                start++;
                k--;
            }else{
                ans[k] = nums[end]*nums[end];
                end--;
                k--;
            }
        }
        
        return ans;
    }
};