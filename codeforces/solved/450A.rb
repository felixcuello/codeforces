n,m = gets.split(/\s/).map(&:to_i)
childs = gets.split(/\s/).map(&:to_i)
size = n
i = 1

h_childs = Hash.new
childs.each_with_index {|e,i| h_childs[i+1] = e}

while n > 1
  i = 1 if i > size
  if h_childs[i] > 0
    h_childs[i] -= m
    if h_childs[i] <= 0
      n -= 1
    end
  end
  i += 1
end

h_childs.each do |k,v|
  if v > 0
    puts k
    break
  end
end