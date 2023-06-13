package main

import "fmt"

type ptb2_struct struct {
	a int
	b int
	c int
}

func nhapPTB2(pt ptb2_struct) {
	fmt.Print("Nhap vao he so a : ")
	fmt.Scan(&pt.a)
	fmt.Print("Nhap vao he so b : ")
	fmt.Scan(&pt.b)
	fmt.Print("Nhap vao he so c : ")
	fmt.Scan(&pt.c)
}

func main() {
	fmt.Print("Hello")
}
