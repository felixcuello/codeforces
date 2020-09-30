def solve(number)
  # Pic only the lucky numbers from the given one
  l_n = number.digits.select {|d| d == 4 || d == 7}
  # From those one picked, we count them and check if any of those digits are distinct to the lucky numbers 4 or 7
  l_n.count.digits.map{|d| return "NO" if d != 4 && d != 7}
  "YES"
end

n = gets.chomp.to_i
puts solve(n)
