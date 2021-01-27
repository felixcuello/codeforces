n,m = gets.split(/\s/).map(&:to_i)
ans = 0
for i in 0..n
  for j in 0..m
    ans += 1 if i**2 + j == n && i + j**2 == m
  end
end
puts ans