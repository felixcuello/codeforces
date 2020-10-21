def count(a)
  tot_amazing = 0
  # The first content is the max and the min number of points
  min = a.shift
  max = min
  a.each do |p|
    if p < min
      min = p
      tot_amazing += 1
    elsif p > max
      max = p
      tot_amazing += 1
    end
  end
  tot_amazing
end

n = gets.to_i
a = gets.split(/\s/).map(&:to_i)

puts count(a)