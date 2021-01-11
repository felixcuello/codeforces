package main

import (
  "bufio"
  "fmt"
  "os"
)

func isNumber(c byte) bool { return int(c) >= 48 && int(c) <= 57 }
func isUpper(c byte) bool { return int(c) >= 65 && int(c) <= 90 }
func isLower(c byte) bool { return int(c) >= 97 && int(c) <= 122 }
func isAlpha(c byte) bool { return isNumber(c) || isLower(c) || isUpper(c) }

func solve() {
  scanner := bufio.NewScanner(os.Stdin)
  freq := make(map[byte]int)
  if scanner.Scan() {
    line := scanner.Text()
    if line == "{}" {
      fmt.Println("0")
      return
    } else {
      for i:=0; i<len(line); i++ {
        if isLower(line[i]) {
          freq[line[i]] += 1
        }
      }
    }
  }

  ans := 0
  for range freq { ans += 1 }

  fmt.Println(ans)
}

func main() {
  solve()
}