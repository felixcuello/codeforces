n, m = gets.split(/\s/).map(&:to_i)
a = gets.split(/\s/).map(&:to_i)

ans = 0
a.sort!
for i in 0...m
  if a[i] <= 0
    ans += a[i]
  else
    break
  end
end

puts ans.abs
