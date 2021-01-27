package main

import (
  "fmt"
)

func main () {
  var t int; fmt.Scanf("%d\n", &t)
  for ;t>0;t-- {
    var n int; fmt.Scan(&n)
    var x int; fmt.Scan(&x)

    if n <= 2 {
      fmt.Println(1)
    } else {
      i := 2
      for ;;i++ {
        from := (i-2) * x + 3
        to   := (i-1) * x + 2
        if n >= from && n <= to { break }
      }
      fmt.Println(i)
    }
  }
}

