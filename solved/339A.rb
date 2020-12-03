a = gets.chomp.split("+")
if a.size > 1
  puts a.sort.join("+")
else
  puts a
end