package main

import (
	"fmt"
)

func iAbs(x int) int { if x >= 0 { return x } else { return -x  } }

func main() {
	var n int
	fmt.Scanf("%d\n", &n)

	soldiers := make([]int, n)
	for i:=0; i<n; i++ {
		fmt.Scanf("%d", &(soldiers[i]))
	}

	var a,b int
	var ma,mb int
	min := 10000000
	for i:=0; i<n; i++ {
		a = i
		b = i+1
		abs := iAbs(soldiers[a] - soldiers[b%n])
		if abs < min {
			min = abs
			ma = a
			mb = b%n
		}
	}
	fmt.Printf("%d %d", ma+1, mb+1)
}
