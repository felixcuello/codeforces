n = gets.to_i
a = gets.split(/\s/).map(&:to_i)

# this will take a reasonable number of cases to know the parity
parity = 0
for i in 0..2
  parity += a[i] % 2
end

# 0 + 0 + 0 even
# 0 + 0 + 1 even
# 0 + 1 + 1 odd
# 1 + 1 + 1 odd
parity > 1 ? parity = 1 : parity = 0

ans = -1
for i in 0...n
  if a[i] % 2 != parity
    ans = i + 1
    break
  end
end

puts ans