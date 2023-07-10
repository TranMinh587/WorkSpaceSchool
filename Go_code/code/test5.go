package main

import "fmt"

func lietkeuocso() (arr []int) {
	fmt.Print("Tim cac uoc so cua so nguyen n \n")
	var n int
	fmt.Print("Nhap vao so nguyen n : ")
	fmt.Scan(&n)
	count := 0
	for i := 1; i < n; i++ {
		if n%i == 0 {
			fmt.Print(i, "\n")
			arr[count] = i
			count++
		}
	}
	fmt.Print("\n")
	return
}

func main() {
	fmt.Print(lietkeuocso())
}
