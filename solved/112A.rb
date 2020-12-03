a = gets.chomp.downcase
b = gets.chomp.downcase

if a == b
  puts 0
elsif a < b
  puts -1
else
  puts 1
end