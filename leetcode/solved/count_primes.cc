class Solution {
  public:
    int countPrimes(int n) {
          vector<bool> sieve(n, true);
          for(int p=2; p*p<n; ++p)
            for(int i=p*p; i<n; i+=p)
              sieve[i] = false;

          int ans = 0;

          for(int i=2; i<n; ++i)
            if(sieve[i])
              ++ans;

          return ans;
        }
};