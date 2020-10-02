def solve(sc, n)
  i = 0
  stones_removed = 0
  while i < sc.size
    # Compare only if the are more than one stone present
    if sc.size > 1
      if i >= 1 && sc.size >=3
        # Comparing if it is a middle position
        if sc[i-1] == sc[i] || sc[i] == sc[i+1]
          sc.delete_at(i)
          stones_removed += 1
        else
          i += 1
        end
      else
        # Comparing if it is the starting position
        if i == 0 && sc[i] == sc[i+1]
          sc.delete_at(i)
          stones_removed += 1
        else
          # Comparing if it is the last position
          if i != 0 && sc[i-1] == sc[i]
            sc.delete_at(i)
            stones_removed += 1
          else
            i += 1
          end
        end
      end
    else
      break
    end
  end
  stones_removed
end
n = gets.to_i
stones_colors = gets.chomp.split(//)
puts solve(stones_colors, n)