n = gets.to_i
super_c_points = 0
coord = []
min_x = Hash.new(1001)
min_y = Hash.new(1001)
max_x = Hash.new(-1001)
max_y = Hash.new(-1001)

n.times do |i|
  x,y = gets.split(/\s/).map(&:to_i)
  min_x[y] = x if min_x[y] > x
  min_y[x] = y if min_y[x] > y
  max_y[x] = y if max_y[x] < y
  max_x[y] = x if max_x[y] < x

  coord << [x,y]
end

coord.each do |x,y|
  if ( x > min_x[y] ) && ( x < max_x[y] ) && ( y > min_y[x] ) && ( y < max_y[x] )
    super_c_points += 1
  end
end

puts super_c_points