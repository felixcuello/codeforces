def check_pile(sa, sb, lf)
  freq_ab = Hash.new(0)
  sa.each_char {|c| freq_ab[c] += 1}
  sb.each_char {|c| freq_ab[c] += 1}

  # If any of the letters counted from the words is greater or less than 0,
  # it means that there are missing chars or more than expected
  # 0< Non existent characters
  # 0< More characters than expected
  # 0> Missing characters
  lf.each_char {|c| freq_ab[c] -= 1}
  freq_ab.each_value do |v|
    if v == 0
      next
    else
      return "NO"
    end
  end
  "YES"
end

string_a = gets.chomp
string_b = gets.chomp
letters_found = gets.chomp

puts check_pile(string_a, string_b, letters_found)
