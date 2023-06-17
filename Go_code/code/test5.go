package main

import "fmt"

func lietkeuocso() {
	fmt.Print("Tim cac uoc so cua so nguyen n \n")
	var n int
	fmt.Print("Nhap vao so nguyen n : ")
	fmt.Scan(&n)

	var arr = [...]int{}

	for i := 1; i < n; i++ {
		if n%i == 0 {
			fmt.Print(i, "\n")
		}
	}

	fmt.Print("\n")

	for i := 1; i < n; i++ {
		if n%i == 0 {
			fmt.Print(i, "\n")
		}
	}
}

func main() {
	lietkeuocso()
}
