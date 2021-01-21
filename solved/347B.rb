n = gets.to_i
a = gets.split(/\s/).map(&:to_i)

opt_swap = false
ans = 0

for i in 0...n
  if i == a[i]
    ans += 1
  else
    # this will allow to swap and check if there is present the value needed
    # in the position of that i-th number
    if a[a[i]] == i
      # if the swap is done over a value exchange the i-th position
      # the number of fixed points is increased in 2
      opt_swap = true
    end
  end

end

if opt_swap
  ans +=2
else
  ans +=1 if ans < n
end

puts ans