times = gets.to_i

def resolve(array)
  array.sort.each_cons(2) {|e,n| return "NO" if n-e >1}
  "YES"
end

(1..times).each do |i|
  array_size = gets.to_i

  a = Array.new(array_size)
  a = gets.split(/\s+/).map(&:to_i)
  puts resolve(a)
end