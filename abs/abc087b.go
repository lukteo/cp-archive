package main

import "fmt"

func main() {
	var A, B, C, X int
	fmt.Scan(&A, &B, &C, &X)
	count := 0

	for i := 0; i <= A; i++ {
		for j := 0; j <= B; j++ {
			for k := 0; k <= C; k++ {
				total := 500*i + 100*j + 50*k
				if total == X {
					count++
				}
			}
		}
	}

	fmt.Println(count)
}
