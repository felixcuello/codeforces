package main

import (
    "fmt"
)

// There are 4 type of tiles depending if n%2 == 0
//
// MAIN        . A
//             A .
//
// OTHERS:     . A    . B
//             B .    A .
//

func main() {
    var t int; fmt.Scan(&t)
    for ;t>0;t-- {
        var n int; fmt.Scan(&n)
        var m int; fmt.Scan(&m)
        v := make([]int, n * 4)

        // parse
        for i:=0; i<4*n; i+=4 {
            var e int
            fmt.Scan(&e); v[i] = e
            fmt.Scan(&e); v[i+1] = e
            fmt.Scan(&e); v[i+2] = e
            fmt.Scan(&e); v[i+3] = e
        }

        // count tiles
        md := 0
        o := 0
        for i:=0; i<4*n; i+=4 {
            if(v[i+1] == v[i+2]) { md += 1 }
            for j:=0; j<4*n; j+=4 {
                if(v[i]==v[j] && v[i+1]==v[j+2] && v[i+2]==v[j+1] && v[i+3]==v[j+3]) {
                    o++
                }
            }
        }
        if((m%2 ==0) && md > 0 && o > 0) {
          fmt.Println("YES")
        } else {
          fmt.Println("NO")
        }
    }
}
