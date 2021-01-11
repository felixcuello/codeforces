package main

import (
  "fmt"
)

//////////////////////////////////////////////////////////////////////////
// Helper functions
//////////////////////////////////////////////////////////////////////////
func iMin(a int, b int) int { if a<b { return a }; return b }
func iMax(a int, b int) int { if a<b { return b }; return a }
func i64Min(a int64, b int64) int64 { if a<b { return a }; return b }
func i64Max(a int64, b int64) int64 { if a<b { return b }; return a }

type Pair struct {
  first, second interface{}
}
//////////////////////////////////////////////////////////////////////////

type Team struct {
  host, guest interface{}
}

func solve() {
  var n int
  fmt.Scanf("%d\n", &n)

  team := make([]Team, n, n)

  for i:=0; i<n; i++ {
    var a,b int
    fmt.Scanf("%d %d\n", &a, &b)
    team[i].host = a
    team[i].guest = b
  }

  ans := 0
  for i:=0; i<n; i++ {
    for j:=0; j<n; j++ {
      if i == j { continue }
      if team[i].host == team[j].guest { ans++ }
    }
  }

  fmt.Println(ans)
}

func main() {
  solve()
}
