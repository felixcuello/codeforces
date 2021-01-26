package main

import (
  "fmt"
)

func main() {
  var n int
  fmt.Scan(&n)
  a := make([]int, n)
  for i:=0;i<n;i++ {
    fmt.Scan(&a[i])
  }

  ans := 0
  max := 0

  var m int
  fmt.Scan(&m)

  var b int
  for j:=0; j<m; j++ {
    fmt.Scan(&b)
    for i:=0; i<n; i++ {
      if b % a[i] == 0 {
        if b / a[i] > max {
          max = b / a[i]
          ans = 0
        }
        if b / a[i] == max { ans++ }
      }
    }
  }

  fmt.Println(ans)
}
