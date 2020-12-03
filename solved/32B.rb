s = gets.chomp
s.gsub!(/--/,"2")
s.gsub!(/-\./,"1")
s.gsub!(/\./,"0")
puts s