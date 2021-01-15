n = gets.to_i
heights = gets.split(/\s/).map(&:to_i)

# this boundary is set by the diff between the heights of the soldiers
min_diff = 1000-1
ans = Array.new
# the amount of comparisions is n-1
for i in 0..n-1
  low = i % (n - 1) # the low boundary has to cycle till the number of comparisions
  high = i + 1 unless i == (n-1) # the highest boundary has to be the number of comparisions
  diff = (heights[low] - heights[high]).abs
  if min_diff > diff
    min_diff = diff
    # here are saved the human readable indexes
    ans = [low + 1, high + 1]
  end
end

puts ans.join(' ')

#n = 5
#
#0 % 4 = 0 ---> 1 (i+1)
#1 % 4 = 1 ---> 2 (i+1)
#2 % 4 = 2 ---> 3 (i+1)
#3 % 4 = 3 ---> 4 (i+1)
#4 % 4 = 0 ---> 4 (i)