package main

import (
	"fmt"
  "sort"
)

func solve() {
	var n int
  fmt.Scanf("%d\n", &n)
  nums := []int{}
  total := 0
  var temp int
  for i:=0; i<n; i++ {
    fmt.Scanf("%d", &temp)
    nums = append(nums, temp)
    total += temp
  }

  // Not really necessary, I could have used sort.Ints, but I wanted to
  // learn how to use a custom sorting function
  sort.Slice(nums, func(i,j int) bool {
    return nums[i] > nums[j]
  })

  ans := 0
  temp = 0
  for i:=0; i<len(nums) && temp <= int(total / 2); i++ {
    temp += nums[i]
    ans += 1
  }
  fmt.Printf("%d",ans)
}

func main() {
  solve()
}

