def count(a,d)
  tot = 0
  if  a > d/2
    tot = d-a
  else
    # as the doors opened are fewer we need to count that amount of time to close them
    tot = a
  end
  tot
end

def calculate(n,l,r)
  # I choose to count 1s and then do the calculation for both sides
  lopens = l.count(1)
  ropens = r.count(1)
  tot_sec = 0

  tot_sec += count(lopens,n)
  tot_sec += count(ropens,n)

  tot_sec
end

n = gets.to_i
r = []
l = []
(1..n).each do
  a,b = gets.split(/\s/).map(&:to_i)
  l << a
  r << b
end

puts calculate(n,l,r)