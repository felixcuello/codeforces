n, t = gets.split(/\s+/).map(&:to_i)

def solve(string,t)
  (1..t).each do
    i = 0
    while i <= string.size
      if string[i] == "B" && string[i+1] == "G"
        string[i] = "G"
        string[i+1] = "B"
        i+=2
      else
        i+=1
      end
    end
  end
  string
end

s = gets.chomp
puts solve(s,t)
