package main

import "fmt"

func nhap() (n int) {
	fmt.Print("\nNhap vao n (n > 0) : ")
	for i := 0; i <= 1; {
		fmt.Scan(n)
		if n <= 0 {
			fmt.Print("\nNhap lai (n > 0) : ")
			fmt.Scan(n)
		} else {
			i++
		}
	}
	return
}

func main() {

	nhap()
}
