package main

import (
  "fmt"
)

func main() {
  var t int
  fmt.Scan(&t)

  for ;t>0;t-- {
    var s string
    fmt.Scan(&s)
    n := int(s[0] - '0')
    ans := 10 * (n-1)
    ls := int(len(s))
    ans += (ls * (ls+1)) / 2
    fmt.Println(ans)
  }
}
