n,k = gets.split(/\s/).map(&:to_i)

# calculating the middle to compare with k
n % 2 == 0 ? mid = n/2 : mid = (n/2)+1

# if k is lesser than the middle is odd else is even
if k <= mid
  # odd numbers
  ans = (k * 2)-1
else
  # even numbers
  ans = (k-mid)*2
end

puts ans