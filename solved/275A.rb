def solve(g)
  # grid is an array which simulates to be a matrix with all the lights on
  grid = Array.new(9,1)
  # s_adj is the array which contains in each position of it the side-adjacent's lights on the game matrix
  s_adj = Array.new
  s_adj[0] = [0,1,3]
  s_adj[1] = [0,1,2,4]
  s_adj[2] = [1,2,5]
  s_adj[3] = [0,3,4,6]
  s_adj[4] = [1,3,4,5,7]
  s_adj[5] = [2,4,5,8]
  s_adj[6] = [3,6,7]
  s_adj[7] = [4,6,7,8]
  s_adj[8] = [5,7,8]

  g.each.with_index do |t, i|
    next if t % 2 == 0
    # As the times to switch the lights is odd the lights and its side-adjacents have to be toggle to the
    # opposite state
    s_adj[i].each { |p| grid[p] ^= 1 }
  end

  (0..2).each {|x| puts grid[x*3,3].join}
end

game = Array.new
(1..3).each { game << gets.split(/\s+/).map(&:to_i) }
solve(game.flatten)