def contest(a,b)
  ans =  a.to_i(2) ^ b.to_i(2)
  ans.to_s(2).rjust(a.size, "0")
end

a = gets.chomp
b = gets.chomp

puts contest(a,b)