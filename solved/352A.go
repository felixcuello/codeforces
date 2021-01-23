package main

import (
  "fmt"
)

func main() {
  var n int
  fmt.Scanf("%d\n", &n)

  f := 0
  z := 0
  for i:=0; i<n; i++ {
    var t int
    fmt.Scanf("%d", &t)
    if t == 5 { f++ }
    if t == 0 { z++ }
  }

  if z<1 {
    fmt.Println(-1)
  } else if f<9 {
    fmt.Println(0)
  } else {
    for i:=0; i<f-(f%9); i++ { fmt.Printf("5") }
    for i:=0; i<z; i++ { fmt.Printf("0") }
  }
}