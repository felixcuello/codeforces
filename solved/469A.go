package main

// IMPORTANT:
// It's guaranteed that the given points are distinct.

import (
  "fmt"
)

func iAbs(x int) int { if x >= 0 { return x } else { return -x } }

func solve() {
  var x1, x2 int
  var y1, y2 int
  fmt.Scanf("%d %d %d %d", &x1, &y1, &x2, &y2)

  if(y1 == y2) { // horizontal alignment
    d := iAbs(x1-x2)
    fmt.Printf("%d %d %d %d", x1, y1+d, x2, y2+d)
  } else if (x1 == x2) { // vertical alignment
    d := iAbs(y1-y2)
    fmt.Printf("%d %d %d %d", x1+d, y1, x2+d, y2)
  } else { // Diagonal
    var x3,y3, x4,y4 int
    if x1 > x2 {
      x3 = x2    //  ? (x4,y4)      . (x2,y2)
      y3 = y1
      x4 = x1
      y4 = y2   //   . (x1,y1)      ? (x3,y3)
    } else { // x1 < x2
      x3 = x2   //   . (x1,y1)      ? (x3,y3)
      y3 = y1
      x4 = x1
      y4 = y2   //   ? (x4,y4)      . (x2,y2)
    }

    d1 := iAbs(x3-x1)
    d2 := iAbs(x4-x2)
    d3 := iAbs(y3-y2)
    d4 := iAbs(y4-y1)

    if d1 != d2 || d1 != d3 || d1 != d4 {
      fmt.Println("-1")
      return
    }

    fmt.Printf("%d %d %d %d", x3, y3, x4, y4)
  }
}

func main() {
  solve()
}