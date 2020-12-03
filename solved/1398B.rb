times = gets.to_i

def resolve(binary_s)
  game_a = binary_s.split("0").map(&:size).sort{|a,b| b <=> a}
  game_a.delete(0)
  alice_points = 0
  game_a.each_with_index {|e,i| alice_points += e if i % 2 == 0}
  alice_points
end

(1..times).each do |i|
  s = gets.chomp
  puts resolve(s)
end