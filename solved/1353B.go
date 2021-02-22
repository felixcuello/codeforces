package main

import (
	"fmt"
	"sort"
)

func solve() {
	var n,k int
	fmt.Scan(&n)
	fmt.Scan(&k)
	a := make([]int, n)
	suma := 0
	for i:=0; i<n; i++ {
		fmt.Scan(&a[i])
		suma += a[i]
	}

	b := make([]int, n)
	for i:=0; i<n; i++ {
		fmt.Scan(&b[i])
	}

	sort.Ints(a)
	sort.Ints(b)

	for i:=0; i<k; i++ {
		if a[i] >= b[n-i-1] {
			break
		}
		suma = suma - a[i] + b[n-i-1]
	}

	fmt.Println(suma)
}

func main() {
	var t int
	fmt.Scan(&t)

	for ;t>0;t-- {
		solve()
	}
}
