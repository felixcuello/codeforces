#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n,m;
  cin >> n >> m;

  vector<int> nums(100001);
  for(int i=n-1; i>=0; --i) {
    int e;
    cin >> e;
    nums[i] = e;
  }

  vector<bool> unseen(100001, true);
  int different = 0;
  vector<int> result(n);
  for(int i=0; i<n; ++i) {
    if(unseen[nums[i]]) {
      unseen[nums[i]] = false;
      ++different;
    }

    result[n-i-1] = different;
  }

  while(m--) {
    int e;
    cin >> e;
    cout << result[e-1] << endl;
  }

  return 0;
}

/*
 * My ruby version
 *


gets

result = []
unvisited = Array.new(100010, true)
different = 0
gets.split(/\s+/).reverse.each do |n|
  n = n.to_i
  if(unvisited[n])
    unvisited[n] = false
    different += 1
  end
  result << different
end

result.reverse!

while n = gets
  puts result[n.to_i-1]
end

*/
