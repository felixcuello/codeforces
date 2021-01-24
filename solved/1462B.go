package main

import (
  "fmt"
)

func main() {
  var t int
  fmt.Scan(&t)
  for ;t>0;t-- {
    var b int
    var s string
    fmt.Scan(&b)
    fmt.Scan(&s)
    if s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0' {
      fmt.Println("YES")
    } else if s[0] == '2' && s[1] == '0' && s[2] == '2' && s[b-1] == '0' {
      fmt.Println("YES")
    } else if s[0] == '2' && s[1] == '0' && s[b-2] == '2' && s[b-1] == '0' {
      fmt.Println("YES")
    } else if s[0] == '2' && s[b-3] == '0' && s[b-2] == '2' && s[b-1] == '0' {
      fmt.Println("YES")
    } else if s[b-4] == '2' && s[b-3] == '0' && s[b-2] == '2' && s[b-1] == '0' {
      fmt.Println("YES")
    } else {
      fmt.Println("NO")
    }
  }
}