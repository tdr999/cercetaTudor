package main

import "fmt"

func localVar() *int{
    var a int
    a = 4
    return &a
}


func main(){
    p := localVar()
    fmt.Printf("Adresa intoarsa %v\n", p) //merge si cu %v dar da mici
    fmt.Printf("Valoarea intoarsa %v\n", *p)
    *p = *p + 1;
    fmt.Printf("Valoarea intoarsa dupa crestere %v\n", *p)
    }
