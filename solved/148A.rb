k = gets.chomp.to_i
l = gets.chomp.to_i
m = gets.chomp.to_i
n = gets.chomp.to_i
d = gets.chomp.to_i

d_damaged = 0
(1..d).each do |i|
  if i % k == 0
    d_damaged += 1
  elsif i % l == 0
    d_damaged += 1
  elsif i % m == 0
    d_damaged += 1
  elsif i % n == 0
    d_damaged += 1
  end
end

puts d_damaged
