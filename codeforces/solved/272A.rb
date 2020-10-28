# adding Dima to the n people
n = gets.to_i + 1
sum = gets.split(/\s/).inject(0) do |a,e|
  a + e.to_i
end

times = 0
5.times do |i|
  times += 1 if (sum + i) % n != 0
end

puts times