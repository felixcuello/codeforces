require 'set'

tprimes = Set.new
sieve = Array.new(1000001,true)
sieve[0] = false
sieve[1] = false
(2..1000000).each do |p|
  next if sieve[p] == false
  i = p*p
  tprimes.add(i)
  while(i<=1000000)
    sieve[i] = false
    i += p
  end
end

gets.to_i
gets.split(/\s+/).each do |x|
  puts tprimes.member?(x.to_i) ? "YES" : "NO"
end
