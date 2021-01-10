package main

import (
  "fmt"
)

func solve() {
  var n int
  fmt.Scanf("%d\n", &n)

  pos := make([]int, n, n)

  for i:=0; i<n; i++ {
    var temp int
    fmt.Scanf("%d", &temp)
    pos[temp-1] = i+1
  }

  for i:=0; i<n; i++ {
    if i > 0 {
      fmt.Printf(" ")
    }
    fmt.Printf("%d", pos[i])
  }
}

func main() {
  solve()
}
