
t = gets.to_i

def play(a,b)
  return 0 if a == b

  if a > b
    c = a
    a = b
    b = c
  end

  x = b - a
  r = x % 10

  if r == 0
    return x / 10
  else
    return (x-r)/10 + 1
  end
end

while t > 0
  a,b = gets.split(/\s+/).map(&:to_i)
  puts play(a,b)
  t -= 1
end

