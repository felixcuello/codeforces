def solve(year)
  n_year = year.to_i + 1
  until n_year.to_s.chars.uniq.size == 4 do
    n_year += 1
  end
  n_year
end

y = gets.chomp
puts solve(y)