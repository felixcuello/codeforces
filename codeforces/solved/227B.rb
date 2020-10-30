def compare_solutions(n,a,q,s)
  v_count = 0
  p_count = 0

  h_elements = Hash.new(0)
  # Creating a hash with element as symbol and value as index (as they can't be repeated cause
  # it could change the final couting for both team members)
  (1..n).each do |i|
    h_elements[a[i-1]] = i-1
  end

  queries = Hash.new(0)
  # Simplifying the amount of queries grouping them because the can be repeated
  s.each do |e|
    queries[e] +=1
  end

  queries.each do |k,v|
    e_index = h_elements[k]
    # vasya's count starting from the begining of the array and multiplied by v times the query is repeated
    v_count += (e_index + 1) * v
    # petya's count from the end of the array and multiplied by v times the query is repeated
    p_count += (n - e_index) * v
  end

  puts "#{v_count} #{p_count}"
end

n = gets.to_i
a_elements = gets.split(/\s/)
q_queries = gets.to_i
queries = gets.split(/\s/)
compare_solutions(n,a_elements,q_queries,queries)