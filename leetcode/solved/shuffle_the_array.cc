class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> ans;
      int numsS = nums.size();
      for(int i=0; 2*i<numsS; ++i) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i+n]);
      }
      return ans;
    }
};