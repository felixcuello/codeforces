k = gets.to_i
if k == 1
  puts gets.chomp
else
  s = Hash.new(0)
  length = 0
  gets.chomp.each_char do |c|
    s[c] += 1
  end

  possible = true
  s.each_value do |v|
    unless v % k == 0
      possible = false
      break
    end
  end

  ans = ""
  if possible
    for i in 1..k
      s.each do |c,v|
        ans << c * (v/k)
      end
    end
    puts ans
  else
    puts -1
  end
end