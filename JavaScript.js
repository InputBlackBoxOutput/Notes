/*
  Notes on JavaScript
  Notes Written by Rutuparn Pawar
  Created on 1 April 2020 

  Disclaimer: These notes are only for reference while studying JavaScript
*/
///////////////////////////////////////////////////////////////////////////////////////////////////////
// Comments

// This is a single line comment

/* This is a multi- 
     line comment  */

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Log to console (Use for debugging)
console.log("This has been logged");
// Show a warning on console
console.warn("This ia a warning");
// Show an error on console
console.error("This is an error");

// Alert user about something
window.alert('Alert');

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Variables                     (Preferably use camel case for variable names Ex:- camelCase)
var str = "I am ";              
let name = "Rutuparn Pawar ";   
const gpa = 9.84;               // Constant variable

console.log(str+name);
//alert(gpa);

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Arithmetic operations
var a = 5; var b = 2;           //Integers
// var a = 6.4; var b= 3.2;     //Decimal or floating point numbers

console.log('a= '+a);
console.log('b= '+b);

console.log("Addition = "+a+b);          //Addition
console.log("Substraction= "+(a-b));     //Substraction
console.log("Division= "+(a/b));         //Division
console.log("Multiplication= "+(a*b));   //Multiplication
console.log("Remainder= "+(a%b));        //Remainder operator

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Increment and decrement operator
// Pre 
console.log('++a ==> '+(++a));
console.log('--b ==> '+(--b));
// Post
a++;
b--;
console.log('a++ ==> '+(a));
console.log('b-- ==> '+(b));

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Compound assigment 
var c = 10;
// var c = 10.10;

c += 10; console.log('c += 10 ==> '+c);
c -= 10; console.log('c -= 10 ==> '+c);
c /= 10; console.log('c /= 10 ==> '+c);
c *= 10; console.log('c *= 10 ==> '+c);

///////////////////////////////////////////////////////////////////////////////////////////////////////
//String and escape characters
var text = "Javascript is fun!";
var speech = "John said, \"Javascript is fun \" ";
//var speech = 'John said, "Javascript is fun"'

var escChar = 'a \n b \t c \\ d \" e \' f';   // Only a few shown 

///////////////////////////////////////////////////////////////////////////////////////////////////////
//String concatenation
var str1 = 'My name is ';
var str2 = 'Rutuparn Pawar';

console.log(str1+str2);
console.log(str1+'\n'+str2);

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Getting char from string using bracket notation
var str = 'Javascript';
console.log('Length of string str =  '+str.length);
console.log('First letter= '+str[0]+'\n'+'Last letter= '+str[str.length-1]);

//str[4]='S'; This is not allowed since strings are immutable. Instead use the following
str = 'JavaScript'; 

///////////////////////////////////////////////////////////////////////////////////////////////////////
//Arrays (Similar to a Python list)
var arr = [10, 20, 30, 40];
console.log(arr);

console.log('First element = '+ arr[0]);      // Accessing element using index

arr[0] = 1000;                                // Updating an element in an array
console.log('Modified array = ' + arr);      

arr.push(50);                                 // Adding an element at the end
console.log('50 added at the end '+ arr);    

arr.pop();                                    // Removing element at the end of array
console.log('50 removed from array ' + arr);

arr.shift();                                  // Adding element at the beginning of array
console.log('First element removed' + arr);

arr.unshift(100);                             // Removing element at the beginning of array
console.log('First element added' + arr);

var list = [10, 'dog', 'cat'];                // Array can store data of various datatypes
console.log(list);

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Multi-dimension array
var arrNest = [[1,2,3],[4,5,6],[7,8,9]];     // Nested array ==> Array in a array 
console.log(arrNest);

console.log('1st array\'s 3rd element = ' + arrNest[0][2]);  // Accessing element in nested array

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Special array functions
 var intArr = [1,2,3,-1,-4,0,3,2];

 intArr.map((a) => (a*100));      // Multiply all elements of array by 100
 intArr.filter((a) => (a > 0));   // Remove integers from array less than 0
 intArr.reduce((a,b) => (a+b));   // Add all elements in the array 
 
///////////////////////////////////////////////////////////////////////////////////////////////////////
// Functions (aka Reusable code :-)
//Nothing return
function sayHello(name) {
	console.log('Hello, '+ name);
}

sayHello('Rutuparn');    //Calling the function 'sayHello'

//Returns something
function square(num) {
	return num * num;
}

console.log('Square of 3 = '+ square(3));  //Calling the function 'square'

//Multiple parameters with return
function sum(a, b) {
	return a + b;
}

console.log('2 + 2 = '+ sum(2,2));  //Calling the function 'sum'

//Function with default parameter
function add(a,b=1) {
	return a + b;
}
add(2,2);   // 2+2
add(2);     // 2+1

//Anonymous function
const greetUser = function() { console.log('Hello');}

//Arrow function
const concat = (a,b) => a + b;

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Scope of a variable
var Var = "Global";  //Global variable

function localScope() {
	var Var = "Local";    //Local variable 
	return Var;
}

console.log(localScope());
console.log(Var)

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Conditional operators
/*
	Equal to                  ==
	Strict equal to           ===
	Not equal to              !=
	Strict not equal to       !==
	Greater than              >
	Less than                 <
	Greater than equal to     >=
	Less than equal to        <=
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Logical operators
/*
	AND      &&
	OR       ||
	NOT      !
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////
// if conditional statement
function canIVote(age) {
	if(age >= 18) {
		console.log('You can vote');
		return true;
	}
}

// if-else conditional statement
function strictEqualNumber(a,b) {
	if(a === b) {   // Strict equal i.e. same value and datatype
		console.log(a+' and '+ b ' are equal');
	} 
	else {
		console.log(a+' and '+ b ' are not equal');
	}
}
// Alternative to if-else conditional operator ==> Ternary operator
function strictEqualNumberAlt(a, b) {
	return (a===b)? "True":"False";
}

//if-else ladder 
function greatestOfThree(a, b, c) {
	if(a>b && a>c) {
		return a;
	}
	else if(b>c) {
		return b;
	}
	else {
		return c;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// switch case conditional statement
function printName(num) {
	switch(num) {
		case 0:console.log('Zero');break;
		case 1:console.log('One');break;
		case 2:console.log('Two');break;
		default:console.log('Greater than 2'); // Optional
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// while loop
var names = ['Rutuparn', 'Om', 'Mansi'];
let i = 0;
while(i < names.length) {
	console.log(names[i]);
	i++;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// do while loop (Runs atleast once)
i = 0;
do{
	console.log(names[i]);
	i++;
}while(i < names.length);

//Note: Useful for designing menus

///////////////////////////////////////////////////////////////////////////////////////////////////////
// for loop
for(let i=0; i<names.length; i++) {
	console.log(names[i]);
}  

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Objects
var obj = {
	"property1":"String",
	"property2":10,               // Integer
	"property3":22.10,            // Float
	"property4":[1,2,3,4]         // Array
};
// Note:Objects are collection of key-value pairs with value being of any datatype

// Accessing object property using dot operator
console.log(obj.property1);             // Accessing property1 from obj

// Accessing object property using bracket notation (Used when property name has a space)
console.log(obj["property2"]);          // Accessing property2 from obj

// Updating object properties
obj.property1 = 'New string';

// Adding new properties
obj.property5 = 'New property';

// Deleting a property
delete obj.property5;

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Generate random number
console.log(Math.random());            // Between 0 and 1
console.log(Math.random()*(x+1));      // Between 0 and x

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Get any number of parameters (Rest operator) 
function sum(...args) {       // 'args' is an array of inputs
	args.reduce((a,b) => a+b);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Copying an array 
arr1 = [1,2,3];
arr2 = arr1;         // arr1 and arr2 refer to the same array
arr2 = [...arr1];    // arr1 and arr2 are now seperate arrays (Spread operator)

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Destructuring assignment
var coordinates = {x:10, y:20, z:30};

// Get x, y & z from coordinates object and then assign them to a, b & c respectively
const {x:a, y:b, z:c} = coordinates;

arr = [10, 20, 30, 40, 50];

// Get [0],[3] from arr array and assign them to a and b
const {a,,,b} = arr;

// Destructuring while object parameter
var stat = {
	max: 37,
	min: 10,
	avg: 15,
	mean: 17
}

function printMinMax({min, max}) { // only min and max from stat object sent
	console.log(min);
	console.log(max);
}

printMinMax(stat);
///////////////////////////////////////////////////////////////////////////////////////////////////////
// Template literal for creating a string
const greet = `Hello ${game.user}`;

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Object literal for creating a object
const createPersonOne = (name, age) => ({ name: name, age:age});
const createPersonTwo = (name, age) => ({ name, age});
// The above 2 are similar

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Class (Template for an object)

class SpaceShuttle {
	constructor(targetPlanet) {
		this.targetPlanet = targetPlanet;
	}

	lauch() {
		console.log("Aye, Aye, Caption! Heading to the final frontier");
	}

	get targetPlanet() {
		return this.targetPlanet;
	}

	set targetPlanet(_planet) {
		this.targetPlanet = _planet;
	} 
}

starShip = new SpaceShuttle("Nowhere");

console.log(starShip.targetPlanet);  // Accessing a variable/property/attribute
starShip.lauch();                    // Accessing and calling a function/method

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Exporting code 

// Exporting functions
const capitalizeString = (str) => str.toUpperClass();
export { capitalizeString };

// Exporting variables
export const foo = "bar";

// Export default (To export anonymous function)
export default function foo(name) {
	console.log("Hello " + name);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Importing code 
import {capitalizeString} from "./file_name.js" //.js is  optional

import * as importedObj from "./file_name";

// Default import
import defaultFxn from "./file_name";  // Note the missing '{}'

///////////////////////////////////////////////////////////////////////////////////////////////////////
//EOF