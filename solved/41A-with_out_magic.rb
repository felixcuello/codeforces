s = gets.chomp
t = gets.chomp

translated = true
for i in 0...s.length
  unless s[i] == t[t.length-1-i]
    translated = false
    break
  end
end

puts translated ? "YES" : "NO"