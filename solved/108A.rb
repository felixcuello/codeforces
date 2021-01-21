def next_palindromic_time(h,m)
  # hours from 6-9 and 16-19 cant be expressed as palindromic time
  if h.to_i % 10 >= 6
    # the next palindromic time is the difference of 10 plus the current hour
    new_h = h.to_i + (10 - (h.to_i % 10))
    h = new_h.to_s
    puts "#{h}:#{h.reverse}"
  else
    # here we are sure that the hour is between 0..5 || 10..15 || 20..24
    # if the minutes are greater than the reverse hour we need to find the next hour again
    if h.reverse <= m
      new_h = ((h.to_i + 1) % 24).to_s
      new_h = "0" + new_h if new_h.to_i < 10
      # as the hour changed we can directly send any time, if it's less than the reversed new hour
      # in the next recursion it will be skipped and return the corrent palindromic time
      m = new_h.reverse.to_i - 1 # the only invalid minute is going to be -1 when hour is 00
      m = "0" + m.to_s if m < 10
      next_palindromic_time(new_h, m.to_s)
    else
      puts "#{h}:#{h.reverse}"
    end
  end
end

h,m = gets.split(":")
next_palindromic_time(h,m)