
def permutation(elements, string)
  if(elements.count == 0)
    puts string
  else
    for c in elements
      permutation(elements - [c], c + string)
    end
  end
end


permutation(['a','b','c','d'], "")
