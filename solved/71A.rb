def replaceLongWords(a)
  a.each do |w|
    if w.size <= 10
      puts w
    else
      puts "#{w[0]}#{w.size-2}#{w[-1]}"
    end
  end
end


n = gets.to_i
a = []
(1..n).each do
  w = gets.chomp
  a << w
end
replaceLongWords(a)