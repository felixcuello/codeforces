a = gets.split(/\s/).map(&:to_i)
b = []
# mili_per_drink / n friends
b << ((a[1]*a[2])/a[6]) / a[0]
# tot_slices / n friends
b << (a[3]*a[4]) / a[0]
# salt_per_drink / n friends
b << (a[5]/a[7]) / a[0]

# the smaller quantity will determine the maximum of drinks the friends can make
b.sort!

puts b.shift