a = gets.strip
if a.to_i >= 0
  puts a
else
  x = a[0..-2].to_i
  y = (a[0..-3] + a[-1]).to_i
  puts x > y ? x : y
end