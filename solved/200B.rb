require 'bigdecimal'

n = gets.to_i
p = gets.split(/\s/).map(&:to_i)

r = BigDecimal(p.sum.to_s) / n
puts r.to_f.round(8)