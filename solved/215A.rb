n = gets.to_i
a = gets.split(/\s/).map(&:to_f)
m = gets.to_i
b = gets.split(/\s/).map(&:to_f)

# if the smaller pedal's number is greater than the last rear's wheel number
# the answer will be 0
max_ratio = 0 # the smallest ratio between both wheels is 1 so the lowest boundary is 0
ans = 0

for i in 0...n
  for j in 1..m
    ratio = b[-j] / a[i]
    if ratio >= max_ratio
      if (ratio % 1 == 0)
        if (ratio > max_ratio)
          max_ratio = ratio
          ans = 1
        elsif (ratio == max_ratio)
          ans += 1
        end
      end
    else
      break
    end
  end
end

puts ans