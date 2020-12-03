times = gets.to_i

def resolve(binary_s, w_size)
  w = ""
  (0..w_size-1).each do |i|
    if i == 0
      w = binary_s[i..w_size-1]
   else
      binary_s[i..w_size+(i-1)].each_char.with_index {|c,index| w[index]="1" if c!=w[index]}
    end
  end
  w
end

(1..times).each do |i|
  w_size = gets.to_i
  s = gets.chomp
  puts resolve(s, w_size)
end