class Solution {
public:
    string convertToTitle(int n) {
      string ans;
      n--;
      while(n >= 0) {
        char c = n % 26;
        ans.push_back(c + 'A');
        n -= 26;
        if(n<0)
          break;
        n /= 26;
      }
      reverse(ans.begin(), ans.end());
      return ans;
    }
};