gets

freq = {}
flowers = []
gets.split(/\s+/).each do |f|
  f = f.to_i

  if freq[f].nil?
    freq[f] = 1
  else
    freq[f] += 1
  end
  flowers << f
end

flowers.sort!

first = flowers[0]
last = flowers[-1]

if(first == last)
  puts "#{last - first} #{(freq[first] * (freq[last]-1))/2}"
else
  puts "#{last - first} #{freq[first] * freq[last]}"
end
