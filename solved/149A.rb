k = gets.to_i
a = gets.split(/\s/).map(&:to_i).sort! {|a, b| b <=> a}
ans = 0
a.each do |v|
  if k > 0
    k -= v
    ans += 1
  else
    break
  end
end

puts k > 0 ? -1 : ans