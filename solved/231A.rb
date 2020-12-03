n = gets.to_i
solutions = 0
(1..n).each do
  a = gets.split(/\s/).map(&:to_i)
  if a.count(1) > 1
    solutions += 1
  end
end
puts solutions