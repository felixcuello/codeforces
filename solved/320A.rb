n = gets.chomp

magic = true
i = 0
while i < n.length
  if n[i..i+2] == "144"
    i += 3
  else
    if n[i..i+1] == "14"
      i +=2
    else
      if n[i] == "1"
        i += 1
      else
        magic = false
        break
      end
    end
  end
end

if magic
  puts "YES"
else
  puts "NO"
end