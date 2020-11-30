
n = gets.to_i

min_row = Hash.new(1001)
max_row = Hash.new(-1001)
min_col = Hash.new(1001)
max_col = Hash.new(-1001)

points = []
n.times do
  x,y = gets.split(/\s+/).map(&:to_i)
  min_row[x] = y if(y < min_row[x])
  max_row[x] = y if(y > max_row[x])
  min_col[y] = x if(x < min_col[y])
  max_col[y] = x if(x > max_col[y])
  points << [x,y]
end

ans = 0

points.each do |p|
  x,y = p
  if( x > min_col[y] && x < max_col[y] && y > min_row[x] && y < max_row[x] )
    ans += 1
  end
end

puts ans

