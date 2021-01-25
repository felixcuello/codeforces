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

  var m int
  fmt.Scan(&m)
  b := make([]int, m)
  for i:=0;i<m;i++ {
    fmt.Scan(&b[i])
  }

  ans := 0
  max := 0
  for i:=0; i<n; i++ {
    for j:=0; j<m; j++ {
      if b[j] % a[i] == 0 {
        if b[j] / a[i] > max {
          max = b[j] / a[i]
          ans = 0
        }
        if b[j] / a[i] == max { ans++ }
      }
    }
  }

  fmt.Println(ans)
}
