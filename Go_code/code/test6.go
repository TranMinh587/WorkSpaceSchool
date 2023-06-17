package main

import "fmt"

func tinh_S_n(n int) (kq int) {
	for i := 1; i <= n; i++ {
		kq = kq + i
	}
	return
}

func main() {
	fmt.Print("Ket qua : ", tinh_S_n(12))
}
