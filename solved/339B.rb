n,m = gets.split(/\s/).map(&:to_i)
time = 0
house = 1
gets.split(/\s/).each do |t|
  if t.to_i < house
    time += (n-house) + t.to_i
  else
    time += t.to_i - house
  end
  house = t.to_i
end

puts time