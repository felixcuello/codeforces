# @param {Integer[]} flowerbed
# @param {Integer} n
# @return {Boolean}

def pos(a, i, ac)
  return 0 if i < 0
  return 0 if i > ac
  a[i]
end


def can_place_flowers(flowerbed, n)
  i = 0
  fc = flowerbed.count - 1
  while i <= fc
    if pos(flowerbed, i-1, fc) == 0 &&
       pos(flowerbed, i,   fc) == 0 &&
       pos(flowerbed, i+1, fc) == 0
      n -= 1
      i += 1
    end

    i += 1
  end

  n <= 0
end


puts can_place_flowers([1,0,0,0,1], 2).inspect

