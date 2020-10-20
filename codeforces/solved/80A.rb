def attack(n,m)
  primes = []
  (n..m).each do |i|
    next if i > 2 && i % 2 == 0
    divisors = []
    (1..i).each {|x| divisors << x if i % x == 0 }
    if divisors.size == 2 && divisors.include?(1) && divisors.include?(i)
      primes << i
    end
  end
  x = primes.index(n)
  return "YES" if primes[x+1] == m
  "NO"
end

n,m = gets.split(" ").map(&:to_i)
puts attack(n,m)