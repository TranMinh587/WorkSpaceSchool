package main

import "fmt"

type diem_struct struct {
	toan    int
	nguvan  int
	anhvan  int
	danhgia string
}

func nhapdiem(hocsinh *diem_struct) {
	fmt.Print("\nNhap vao diem toan : ")
	fmt.Scan(&hocsinh.toan)
	fmt.Print("\nNhap vao diem ngu van : ")
	fmt.Scan(&hocsinh.nguvan)
	fmt.Print("\nNhap vao diem anh van : ")
	fmt.Scan(&hocsinh.anhvan)
	fmt.Print("\nNhap vao danh gia : ")
	fmt.Scan(&hocsinh.danhgia)
}

func main() {
	var hocsinha diem_struct

	nhapdiem(&hocsinha)

	fmt.Print(hocsinha.toan)
	fmt.Print(hocsinha.nguvan)
	fmt.Print(hocsinha.anhvan)
	fmt.Print(hocsinha.danhgia)
}
