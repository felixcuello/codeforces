package main

import (
  "fmt"
)

func main() {
	var t int
	fmt.Scan(&t)
	for ;t>0;t-- {
		var n int
		fmt.Scan(&n)
		even := 0
		odd := 0
		off := 0
		for i:=0; i<n; i++ {
			var e int
			fmt.Scan(&e)
			if e%2 == 0 {
				even++
				if i%2 == 1 { off++ }
			} else {
				odd++
				if i%2 == 0 { off++ }
			}
		}

    if (even != (n/2 + n%2)) || (odd != n/2) {
      fmt.Println("-1")
      continue
    }

    fmt.Println(off/2)
	}
}
