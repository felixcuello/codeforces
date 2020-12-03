(1..5).each do |i|
  m = gets.split(/\s+/).map(&:to_i)
  i_th = m.index(1)
  unless i_th.nil?
    movements = (3-(i_th+1)).abs + (3-i).abs #Calculating distance to the matrix's center
    puts movements
    break
  end
end
