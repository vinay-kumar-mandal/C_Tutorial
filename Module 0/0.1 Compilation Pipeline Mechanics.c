# include <stdio.h>
# define PI 3.14

//Area calculation
int main() {
    float radius = 5.0;
    float area = PI * radius * radius;
    printf("Area of the circle: %.2f\n", area);
    return 0;
}
 /*-------------*/
// 1. Prepocessing Stage (.c file) -> Preprocessor (Preprocessing) -> .i file

/* 
``bash
gcc -E 0.1_compilation_pipeline.c -o 0.1_compilation_pipeline.i
*/

//Result: 0.1_compilation_pipeline.i file khol kar dekhein. Isme 800+ lines hongi. Saare comments gayab ho chuke honge aur PI ki jagah 3.14159 aa chuka hoga.

/*----------------------*/

//2. Compilation Stage (.i file) -> Compiler (Compilation) -> .s file

/*
``bash
gcc -S 0.1_compilation_pipeline.i -o 0.1_compilation_pipeline.s
*/

/*Result: 0.1_compilation_pipeline.s me x86_64 assembly instructions dekhenge (jaise movss, mulss, call).*/


/*------------*/

//3. Assembly Stage (.s file) -> Assembler (Assembly) -> .o/ .obj file

/*
``bash
gcc -c 0.1_compilation_pipeline.s -o 0.1_compilation_pipeline.o
*/

// Result: Binary file (0.1_compilation_pipeline.o). Is file ko text editor me nahi padha ja sakta. Ye abhi bhi execute nahi ho sakti kyunki printf ka exact memory address ise abhi nahi pata.


/*--------------*/

//4. Linking Stage (.o file) -> Linker (Linking) -> Executable file

/*
``bash
gcc 0.1_compilation_pipeline.o -o 0.1_compilation_pipeline.exe
*/
// Result: Executable file (0.1_compilation_pipeline.exe). Is file ko run karne par output me "Area of the circle: 78.50" print hoga.
