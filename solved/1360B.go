package main

import (
	"fmt"
	"sort"
)

func abs(a int) int {
  if a >= 0 {
    return a
  }

  return -a
}

func main() {
	var t int
  fmt.Scan(&t)
	for ;t>0;t-- {
		var n int
		fmt.Scan(&n)

		v := make([]int, n)

		for i:=0; i<n; i++ {
			var e int
			fmt.Scan(&e)
			v[i] = e
		}

		sort.Ints(v)

		min := 1000000
		for i:=0; i<n-1; i++ {
			if abs(v[i]-v[i+1]) < min {
				min = abs(v[i]-v[i+1])
			}
		}

		fmt.Println(min)
	}
}
