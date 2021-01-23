package main

import (
	"fmt"
)

func main() {
	var n, m int
	fmt.Scanf("%d %d\n", &n, &m)
	v := make([]uint64, m)
	for i := 0; i < m; i++ {
		fmt.Scanf("%d", &(v[i]))
	}

  var steps,pos uint64
  pos = 1
  steps = 0
  for i := 0; i < m; i++ {
    if v[i] >= pos {
      steps += v[i] - pos
    } else {
      steps += uint64(n) - (pos - v[i])
    }
    pos = v[i]
    //fmt.Println("steps=", steps)
  }

	fmt.Println(steps)
}
