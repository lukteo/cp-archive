package main

import (
	"fmt"
	"strconv"
)

func main() {
	var N, A, B int
	fmt.Scan(&N, &A, &B)

	sum := 0

	for i := 1; i <= N; i++ {
		str := strconv.Itoa(i)
		ds := 0

		for j := 0; j < len(str); j++ {
			ds += int(str[j] - '0')
		}

		if ds >= A && ds <= B {
			sum += i
		}

	}

	fmt.Println(sum)
}
