times = gets.to_i

(1..times).each do |i|
  array_size = gets.to_i

  a = Array.new(array_size)
  a = gets.split(/\s+/).reverse.join(" ")
  puts a
end