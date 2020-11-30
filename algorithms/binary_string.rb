


def generate_binary(string, n)
  if(string.length == n)
    puts string
  else
    generate_binary("0" + string, n)
    generate_binary("1" + string, n)
  end
end

generate_binary("", 5)
