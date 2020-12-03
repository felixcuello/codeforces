n = gets.to_i
x = 0
(1..n).each do
  op = gets.chomp
  if op.include?("+")
    x +=1
  else
    x-= 1
  end
end
puts x