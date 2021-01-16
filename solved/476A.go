package main

import (
  "fmt"
)

func main() {
  var n,m int
  fmt.Scanf("%d %d\n", &n, &m)

  if m > n {
    fmt.Println("-1")
    return
  }

  ans := 0
  curr := 0

  for {
    if curr >= n && ans % m == 0 { break }
    curr += 2
    ans++
  }

  fmt.Println(ans)
}
