include Math

def calculate(s1, s2, s3)
  a = sqrt(s1*s3/s2).round
  b = sqrt(s1*s2/s3).round
  c = sqrt(s2*s3/s1).round

  puts 4*(a+b+c)
end

n,m,p = gets.chomp.split(/\s/).map(&:to_i)
calculate(n,m,p)