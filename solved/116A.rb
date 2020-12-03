def get_min_capacity(passangers)
  temp_p = passangers.shift.sum
  # removing the last stop which is not important because all passangers exit the tram
  passangers.pop
  # the first minimun allowed should be the total of passangers entered
  min = temp_p

  passangers.each do |a,b|
    temp_p = (temp_p-a) + b
    min = temp_p if temp_p > min
  end
  min
end

s = gets.to_i
a_p = []
(1..s).each do
  a = gets.split(/\s/).map(&:to_i)
  a_p << a
end
puts get_min_capacity(a_p)