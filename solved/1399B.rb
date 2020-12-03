times = gets.to_i

def resolve(candies, oranges)
  min_c = candies.min
  min_o = oranges.min
  ops_c = candies.map{|e| e-min_c}
  ops_o = oranges.map{|e| e-min_o}
  ops_c.zip(ops_o).each.map(&:max).sum
end

(1..times).each do |i|
  array_size = gets.to_i

  c,o = Array.new(array_size)
  c = gets.split(/\s+/).map(&:to_i)
  o = gets.split(/\s+/).map(&:to_i)
  puts resolve(c,o)
end