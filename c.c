/*
/////////////////////////////////////////////////////////////////////////////////////////////////
C programming language notes
Notes written by InputBlackBoxOutput

Disclaimer: These notes are only for reference while learning the C programming language
/////////////////////////////////////////////////////////////////////////////////////////////////
// General notes
C program files have an extension => .c while header files have an extension .h
'main' function is the entrypoint of all c programs 

Errors --> Compiler-time error => 1) syantax error  (Missing semi-colon )
						       	  2) semantic error (Adding "ab" with 5!)
		   Linker error => Error occured while linking object codes and libs

		   Run-time error => Errors while the program is executing (Divide by 0!)

		   Logic error => Error in the algorithm/logic of the program (Program not working as expected!)

Warning --> They tell us that some aspects of the program may lead to run-time failure
     
/////////////////////////////////////////////////////////////////////////////////////////////////
// Compiling C++ program in windows (Using mingw)

1.Change to directory of project files usind cd 
2.Compile source code using gcc filename.c -o outfilename
3.Run outfilename.exe 

/////////////////////////////////////////////////////////////////////////////////////////////////
// Compiling C program in Linux (Ubuntu)
// Note: My prefered editor ==> gedit

1.Change to directory of project files usind cd 
2.Compile source code using gcc filename.c
3.Run ./a.out to run object code
4.To make a executable using gcc filename.c -o outfilename
5.Run ./outfilename
*/
/////////////////////////////////////////////////////////////////////////////////////////////////
//Comments
// Single line
/*
	Multi-line comment
*/

/////////////////////////////////////////////////////////////////////////////////////////////////
// Most simplest C++ program (This program does nothing!)
#include <iostream>

int main() {
	return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////
// Precompiler directives

//Macros 
#define MACRO  20
#undef MACRO

//Assist in Linking
#include <iostream>
#include "stdint"

//Assist in Compiling
#error "Error in blah blah"
#pragma startup  fxn_name    // Run the specified function before main function
#pragma end      fxn_name    // Run the specified function after complete execution of program

//Conditional compilation
#ifdef MACRO
#ifndef MACRO
#elif MACRO
#else
#endif
/////////////////////////////////////////////////////////////////////////////////////////////////
// Basic input/output
// include <stdio.h>

printf("String \n");                // Newline
printf("String");                   // No newline

int variable1; double variable2;

scanf("%d", &variable1);                            //Single variable
scanf("%d%lf", &variable1, &variable2);             //Multiple variables

/////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////