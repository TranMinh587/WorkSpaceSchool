package main

import "fmt"

func tinh_S_n_1(n int) (kq int) {
	kq = (n * (n + 1)) / 2
	return
}

func tinh_S_n_2_1(n int) (kq int) {
	for i := 1; i <= n; i++ {
		kq = kq + i
	}
	return
}

func tinh_S_n_2(n int) (kq int) {
	kq = ((n-1)*n*(n+1))/3 + ((n+1)*n)/2
	return
}

func main() {

	var n int

	fmt.Print("Nhap vao so n : ")

	fmt.Scan(&n)

	fmt.Print("Ket qua : ", tinh_S_n_2(n))
}
