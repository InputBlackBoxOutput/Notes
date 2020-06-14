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
// Variables and primitive datatypes

int i = 10;
float f = 1.2;
double d = 20.20;
char c = 'A';

//Constants (These are variables that never change value i.e. become constant)
const int no_of_days = 7;
const float pi = 3.142;

//Can variable store negative numbers? Yes => 'signed'     (Default)
//                                     No =>  'unsigned'

signed int temperature = -5;
unsigned int number_of_people = 10; 

//Local and global variable
//  Local  => inside a scope  
//  Global => outside a scope

/////////////////////////////////////////////////////////////////////////////////////////////////
// Arrays
// Creating an array
int arr1[10];                       // Integer array of size 10
char c[]={'A','B','C','D','E'};     // Character array containg first five alphabets

// Accessing and modifying elements in an array
arr1[0]=10;                  // Modifying the first element to 10
arr1[3]=5;                   // Modifying the fourth element to 5

printf("First element of array = %d", arr1[0]);     // Accessing the first element

// Creating a multi-dimensional array
int arr2[3][2]={ {1,2},
                 {3,4},
                 {5,6} };                       // Integer array of size 3x2

// Accessing and modifying elements in an multi-dimension array
arr2[0][0] = 10;                  
arr2[3][1] = 5;                   

cout << arr2[0][0] << endl; 
    
/////////////////////////////////////////////////////////////////////////////////////////////////
// Strings
//-----------------------------------------------------------------------------------------------
// Useful character related functions
#include<ctype.h>
isaplha(ch);  isapnum(ch); isdigit(ch);
isupper(ch);  islower(ch);

tolower(ch); toupper(ch);

//-----------------------------------------------------------------------------------------------
// C style strings (\0 (null) terminated strings)
char name[]={"Rutuparn Pawar"};

char fstName[8];
fstName = "Rutuparn";            // This will not work, instead use strcpy(fstName, "Rutuparn");

scanf("%s", &fstName);          // Getting string from user

// Note the above functions can be found in #include<strings.h>
strcpy(fstName, "Rutuparn");   
strcat(fstName," Pawar");
cout << strlen(fstName);
strcmp('Hello', 'hello');

/////////////////////////////////////////////////////////////////////////////////////////////////
// Functions (Provides abstraction)
// Function with only parameters
void greetUser(string name) {
	printf("Hello, User");
}

// Function with only return
int generateRandomNumber() {
	return rand()%7;             // Return random number between 0 and 6 (Similar to a dice)
}

// Function with return and parameters
int greaterNum(int num1, int num2) {
	if(num1 > num2)
		return num1;
	else
		return num2;
}

// Calling a function
void areaCircle(void);  // Function prototype

int main() {
	areaCircle();       // Calling the function
	return 0;
}

void areaCircle() {
	double r;
	printf("Enter radius of circle:");
	scanf("%lf", &r);
	printf("Area of circle:%lf", (3.142*r*r));
}
////////////////////////////////////////////////////////////////////////////////////////////////
