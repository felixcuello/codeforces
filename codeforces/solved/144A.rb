def order(n,a)
  minmax = a.minmax
  min = minmax.shift
  max = minmax.shift

  #As the smaller soldier has to be at the end of the line we need to look for the closest one to that pos
  min_pos = a.rindex(min)
  # The highest soldier has to be first that's why we start looking from the beginig of the line
  max_pos = a.index(max)

  tot_sec = 0
  #Checking if the soldiers have to be swapped between them
  if min_pos < max_pos
    # Has to be -2 because of the array index and one less to the end of line,
    # that's because the soldiers are swapped between them and we consider that time on the max_pos
    tot_sec = max_pos + ((n-2) - min_pos)
  else
    tot_sec = max_pos + ((n-1) - min_pos)
  end

  tot_sec
end

n = gets.to_i
a = gets.split(/\s/).map(&:to_i)
puts order(n,a)