package main

import (
  "fmt"
)

func main() {
  var tc int
  fmt.Scan(&tc)

  for i:=0; i<tc; i++ {
    var c int
    fmt.Scan(&c)

    o := 0
    t := 0
    for j:=0; j<c; j++ {
      var temp int
      fmt.Scan(&temp)
      if(temp == 1) {
        o++
      } else {
        t++
      }
    }

    if t % 2 != 0 {
      if(o < 2) { fmt.Println("NO"); continue }
    }

    if o % 2 == 0 {
      fmt.Println("YES")
    } else {
      fmt.Println("NO")
    }
  }
}