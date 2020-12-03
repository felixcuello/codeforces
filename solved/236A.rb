w = gets.chomp
if w.scan(/./).uniq.size % 2 == 0
  puts "CHAT WITH HER!"
else
  puts "IGNORE HIM!"
end