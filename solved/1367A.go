package main

import (
  "fmt"
)

func main() {
  var t int; fmt.Scan(&t)
  for ;t>0;t-- {
    var s string
    fmt.Scan(&s)
    ls := len(s)
    fmt.Printf("%c", s[0])
    for i:=1; i<ls-1; i+=2 {
      fmt.Printf("%c", s[i])
    }
    fmt.Printf("%c\n", s[ls-1])
  }
}