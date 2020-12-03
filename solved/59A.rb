s = gets.chomp
s.scan(/[A-Z]/).size > (s.size / 2) ? s.upcase! : s.downcase!
puts s