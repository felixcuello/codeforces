
n = gets.to_i

points = []
n.times do
  x,y = gets.split(/\s+/).map(&:to_i)
  points << [x,y]
end


# Time: O(n^2)
ans = 0
n.times do |i|
  x,y = points[i]
  right = 0
  left = 0
  up = 0
  down = 0
  n.times do |j|
    next if i == j

    x1,y1 = points[j]
    # right
    right = 1 if(x1 > x and y1 == y)
    left = 1 if(x1 < x and y1 == y)
    up = 1 if(x1 == x and y1 > y)
    down = 1 if(x1 == x and y1 < y)
  end

  ans += 1 if(right == 1 && left == 1 && up == 1 && down == 1)
end

puts ans
