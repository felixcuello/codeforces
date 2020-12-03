p = gets.chomp
a = p.scan(/./)
f = 0
a.each do |c|
  if c == "H" || c == "Q" || c == "9"
    f = 1
    break
  end
end

if f == 1
  puts "YES"
else
  puts "NO"
end