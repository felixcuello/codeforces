n, m, a, b = gets.split(/\s/).map(&:to_i)

special_rides = (n / m)
missing_rides = n - m * special_rides
total = Array.new
# here we calculate only with specials
total <<  (special_rides + 1) * b
# here we calculate only with one-ride
total << n * a
# here we calculate the mix with specials and one-ride
total << special_rides *b + missing_rides * a

puts total.min