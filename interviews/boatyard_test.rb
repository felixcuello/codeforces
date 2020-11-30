def change_keys(a,b)
  hash = Hash.new

  b.each do |k,v|
    # This will save the cases when there is not correspondence to a new key on the hash
    a.has_key?(k) ? hash[a[k]] = v : hash[k] = v
    hash[a[k]] = change_keys(a,v) if v.class == Hash
  end
  hash
end

hash_a = {:key1=>:key2, :key3=>:key4, :key5=>:key6, key7: nil}
hash_b = {key8: "test", :key1=>"test", :key3=>{:key5=>"test", :key1=>{:key7=>"test", :key5=>"test"}}}
puts change_keys(hash_a, hash_b)

