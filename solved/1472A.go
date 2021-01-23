package main

import (
  "fmt"
)

func main() {
  var t int
  fmt.Scanf("%d\n", &t)
  for i:=0; i<t; i++ {
    var w, h, n uint64
    fmt.Scanf("%d %d %d\n", &w, &h, &n)
    var f uint64
    f = 1
    for (w % 2 == 0) || (h % 2 == 0) {
      f *= 2
      if f >= n { break }

      if w % 2 == 0 {
        w /= 2
      } else if h % 2 == 0 {
        h /= 2
      }
    }
    if f >= n {
      fmt.Println("YES")
    } else {
      fmt.Println("NO")
    }
  }
}