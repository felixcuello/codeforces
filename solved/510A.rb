n,m = gets.split(/\s/).map(&:to_i)
s = Array.new(m,"#")
empty = Array.new(m,".")
last = true

for i in 1..n
  if i % 2 == 0
    if last
      last = false
      empty[-1] = "#"
      empty[0] = "."
    else
      last = true
      empty[-1] = "."
      empty[0] = "#"
    end
    puts empty.join
  else
    puts s.join
  end
end