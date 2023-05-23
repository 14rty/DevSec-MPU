package main

import (
	"fmt"
	"io/ioutil"
	"os"
	"time"
)

func main() {
	const len = 32

	file, err := os.OpenFile("./abo.test", os.O_RDWR, 0644)
	if err != nil {
		fmt.Println("Error opening file!")
		return
	}
	defer file.Close()

	content, err := ioutil.ReadAll(file)
	if err != nil {
		fmt.Println("Error reading file!")
		return
	}

	fmt.Println(string(content))

	time.Sleep(3 * time.Second)

	rawtime := time.Now()
	info := rawtime.Local()
	content = make([]byte, len)
	n := info.Format("2006-01-02 15:04:05 ")
	copy(content, n)

	_, err = file.Seek(0, 0)
	if err != nil {
		fmt.Println("Error seeking file!")
		return
	}
	_, err = file.Write(content)
	if err != nil {
		fmt.Println("Error writing file!")
		return
	}
}
