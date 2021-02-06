package main

import (
  "fmt"
)

func main() {
  var t int; fmt.Scan(&t)
  for ;t>0;t-- {
    var n int64; fmt.Scan(&n)

    ans := 0
    for n % 3 == 0 {
      if n % 2 == 0 {
        n /= 6
        ans++
      } else {
        n *= 2
        ans++
      }
    }

    if n == 1 {
      fmt.Println(ans)
    } else {
      fmt.Println("-1")
    }
  }
}
