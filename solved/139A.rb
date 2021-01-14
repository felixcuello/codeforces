n = gets.to_i
pages_per_day = gets.split(/\s/).map(&:to_i)

book_read = false
i = 0
day = 0
until book_read
  if pages_per_day[i] < n
    n -= pages_per_day[i]
    i == 6 ? i = 0 : i += 1
  else
    book_read = true
    day = i + 1
  end
end

puts day