
k = gets.to_i
l = gets.to_i
m = gets.to_i
n = gets.to_i
d = gets.to_i

ans = 0

# Space: O(1)  |   Time: O(n)
for i in (1..d)
  if i%k == 0
    ans += 1
  elsif i%l == 0
    ans += 1
  elsif i%m == 0
    ans += 1
  elsif i%n == 0
    ans += 1
  end
end

puts ans
