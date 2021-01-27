package main

import (
  "fmt"
  "sort"
)

func main() {
  var n int; fmt.Scan(&n)
  var m int; fmt.Scan(&m)

  v := make([]int, n)
  for i:=0; i<n; i++ { fmt.Scan(&v[i]) }

  sort.Ints(v)

  ans := 0
  for i:=0; i<m; i++ {
    if v[i] > 0 { break }
    ans -= v[i]
  }

  fmt.Println(ans)
}