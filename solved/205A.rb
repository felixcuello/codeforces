n = gets.to_i
c = gets.split(/\s/).map(&:to_i)

# set min time with the time boundary from the problem
min_time = 10**9 + 1

# set -1 as multiple cities
c_selected = -1

for i in 0...n
  if c[i] <= min_time
    # if there exists a previous equal time we need to mark that there are multiple cities
    if c[i] == min_time
      c_selected = -1
    else
      # saved the city index as human readable
      c_selected = i+1
      min_time = c[i]
    end
  end
end

if c_selected == -1
  puts "Still Rozdil"
else
  puts c_selected
end
