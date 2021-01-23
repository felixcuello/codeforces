n = gets.to_i
match = Hash.new(0)
for i in 1..n
  t = gets.chomp
  match[t] += 1
end

match.select {|k,v| puts k if v > n/2}