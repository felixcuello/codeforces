package main

import (
  "fmt"
)

////////////////////////////////////////////////////////////////
func iMin(a int, b int) int { if a<b { return a }; return b }
func iMax(a int, b int) int { if a<b { return b }; return a }
func i64Min(a int64, b int64) int64 { if a<b { return a }; return b }
func i64Max(a int64, b int64) int64 { if a<b { return b }; return a }
////////////////////////////////////////////////////////////////

func solve() {
  var n, m int
  fmt.Scanf("%d %d\n", &n, &m)

  moves := iMin(n,m)
  if moves % 2 == 0 {
    fmt.Println("Malvika")
  } else {
    fmt.Println("Akshat")
  }
}

func main() {
  solve()
}
