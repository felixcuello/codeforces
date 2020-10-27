# @param {Integer[]} nums
# @return {Integer}
def num_identical_pairs(nums)
  s = nums.size()
  total = 0
  (0..s).each do |i|
    (i+1..s).each do |j|
      total += 1 if nums[i] == nums[j]
    end
  end

  total
end