package main

import "fmt"

func TestVar(a int, b string) (x int, y string) {
	x = a + 1
	y = b
	return
}

func main() {
	fmt.Print("Hello \n")

	a := 5
	b := "Xin chao"

	var x, y = TestVar(a, b)

	fmt.Print("x = ", x, " y = ", y, "\n")
}
