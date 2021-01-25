package main

import (
  "fmt"
)

func main() {
  var t int
  fmt.Scan(&t)
  for ;t>0;t-- {
    var s int
    fmt.Scan(&s)
    v := make([]int, s)
    for i:=0; i<s; i++ { fmt.Scan(&v[i]) }

    p1 := 0
    for ;v[p1]==0 && p1<s; p1++ {}

    p2 := s-1
    for ; v[p2]==0 && p2>=0; p2-- {}

    ans := 0
    for i:=p1; i<p2; i++ {
      if v[i] == 0 { ans++ }
    }
    fmt.Println(ans)
  }
}