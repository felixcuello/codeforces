def calculate(a, d)
  # if 1 is included the amount of dragons damaged will be all
  return d if a.include?(1)

  
end

a = []
d = 1
(1..5).each do |i|
  if i < 5
    a << gets.to_i
  else
    d = gets.to_i
  end
end

puts calculate(a,d)