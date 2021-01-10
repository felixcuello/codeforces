package main

import "fmt"
import "sort"

func solve() {
  var a int; fmt.Scanf("%d\n", &a)
  var b int; fmt.Scanf("%d\n", &b)
  var c int; fmt.Scanf("%d\n", &c)

  nums := []int{a+b+c, a+b*c, a*b+c, a*b*c, (a+b)*c, a*(b+c)}
  sort.Ints(nums)

  fmt.Println(nums[len(nums)-1])
}

func main() {
  solve()
}

