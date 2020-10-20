def permute(n)
  return -1 if n % 2 == 1
  a = (1..n).to_a

  i = 0
  p = []
  while i < n-1
    p[i] = a[i+1]
    p[i+1] = a[i]
    i +=2
  end
  p.join(' ')
end

n = gets.to_i
puts permute(n)