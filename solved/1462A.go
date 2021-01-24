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
    v := make([]int, n)
    for i:=0; i<n; i++ {
      fmt.Scan(&v[i]);
    }

    a := 0
    b := n-1
    for i:=0;a<=b; {
      if i>0 { fmt.Printf(" ") }
      fmt.Printf("%d ", v[a])
      if(a != b) { fmt.Print(v[b]) }
      i++
      a++
      b--
    }

    fmt.Println()
  }
}