package main

import (
	"fmt"
	"sort"
)

func solve() {
	even := 0
	odd := 0
	consecutive := 0

	var n int
	fmt.Scan(&n)

	v := make([]int, n)
	for i:=0; i<n; i++ {
		fmt.Scan(&v[i])
	}

	sort.Ints(v)

	for i:=0; i<n-1; i++ {
		if v[i]+1 == v[i+1] {
			consecutive += 1
		}

		if v[i] % 2 == 0 {
			even++
		} else {
			odd++
		}
	}

	if(v[n-1] % 2 == 0) {
		even++
	} else {
		odd++
	}

  if (even % 2 != odd % 2) {
    fmt.Println("NO")
  } else {
    if(even % 2 == 0) && (odd % 2 == 0) {
      fmt.Println("YES")
    } else {
      if(consecutive > 0) {
        fmt.Println("YES")
      } else {
        fmt.Println("NO")
      }
    }
  }
}

func main() {
	var t int
	fmt.Scan(&t)
	for ;t>0;t-- {
		solve()
	}
}
