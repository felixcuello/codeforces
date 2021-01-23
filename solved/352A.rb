n = gets.to_i
ans = -1
zeros = 0
fives = 0
gets.split(/\s/).each do |c|
  c = c.to_i
  if c == 0
    ans = c if ans < c
    zeros += 1
  else
    fives += 1
  end

  if zeros > 0 && fives >= 9
    tmp = "5" * (fives - (fives % 9 )) + "0" * zeros
    tmp = tmp.to_i
    ans = tmp if (tmp % 90 == 0 ) && (ans < tmp)
  end
end

puts ans