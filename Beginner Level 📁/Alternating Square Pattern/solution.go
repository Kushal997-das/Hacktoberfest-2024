package main

import "fmt"

func main() {
    var N int
    fmt.Print("Enter the number of lines to print: ")
    fmt.Scan(&N)

    count := 1
    for i := 1; i <= N; i++ {
        if i%2 == 1 {
            // Print increasing numbers for odd rows
            for j := 0; j < 5; j++ {
                fmt.Printf("%d ", count)
                count++
            }
        } else {
            // Print decreasing numbers for even rows
            temp := count + 4
            for j := 0; j < 5; j++ {
                fmt.Printf("%d ", temp)
                temp--
            }
            count += 5
        }
        fmt.Println()
    }
}
