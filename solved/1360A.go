package main

import (
	"fmt"
)

func main() {
	var t int
	fmt.Scan(&t)
	for ;t>0;t-- {
		var a,b int
		fmt.Scan(&a)
		fmt.Scan(&b)

		max := 0
		min := 0
		if a > b {
			max = a
			min = b
		} else {
			max = b
			min = a
		}

		if min*2 > max {
			fmt.Println(min*2*min*2)
		} else {
			fmt.Println(max*max)
		}
	}
}
