# This is just a test case generator
ruby -e 'print "1000 " + Array.new(1000).map{|e| rand(100000)*(rand(2) < 1 ? -1 : 1)}.join(" ")' > 246B.in