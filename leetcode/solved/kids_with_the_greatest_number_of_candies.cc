class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int biggest = 0;
      int cl = candies.size();
      for(int i=0; i<cl; ++i)
        if(candies[i] > biggest)
          biggest = candies[i];

      vector<bool> ans;
      for(int i=0; i<cl; ++i)
        ans.push_back(candies[i] + extraCandies >= biggest);

      return ans;
    }
};