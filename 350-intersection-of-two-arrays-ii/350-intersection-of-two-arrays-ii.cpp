class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int s1 = nums1.size();
        int s2 = nums2.size();
        unordered_map<int,int> m1,m2;
        for(auto it:nums1){
            m1[it]++;
        }
        
        for(auto it:nums2){
            m2[it]++;
        }
        if(s1<s2){
            //we will check for nums1's element for every m2----
            for(auto i:nums1){
                if(m2[i]){
                    ans.push_back(i);
                    m2[i]--;
                }
            }
        }else{
            //we will check for nums2's element for every m1----
            for(auto i:nums2){
                if(m1[i]){
                    ans.push_back(i);
                    m1[i]--;
                }
            }
        }
        
        return ans;
    }
};