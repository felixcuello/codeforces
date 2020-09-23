forces = gets.to_i

def solve(n_forces)
  all_forces = Array.new(3,0)

  (1..n_forces).each do |i|
    a = gets.split(/\s+/).map(&:to_i)
    all_forces = all_forces.zip(a).map(&:sum)
  end

  all_forces == [0,0,0] ? "YES" : "NO"
end

puts solve(forces)