/* 
# C++ Standard Template Library (STL)
///////////////////////////////////////////////////////////////////////////////////////////////////////
# Points to note
This is a library which provides basic datastructures and algorithms
Class templates have been used to implement containers in this library

Note: See https://www.cppreference.com/Cpp_STL_ReferenceManual.pdf for a more detailed reference

///////////////////////////////////////////////////////////////////////////////////////////////////////

# Components of STL
1. Containers: Store information
Containers are grouped into three categories:
a) Sequences Containers
b) Container Adapters
c) Associative Containers


2. Algorithms: Manipulate information 
STL provides general-purpose iterating algorithms

3. Iterators: Provides a way for algorithms to access data in containers 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Array
// Include using: #include <vector>
// Syntax: std::array<object_type, array_size> array_name;


std::array<int, 4> arr = { 2, 4, 6, 8 };

// Accessing elements
cout << arr.at(2) << endl;    //Checks bounds before accessing element
cout << arr[3] << endl;

cout << arr.front() << endl;
cout << arr.back() << endl;

// Modifying elements
arr.at(2) = 10;
arr[3] = 5;

// Other useful functions
arr.fill(10);

if(arr.empty()) cout << "Array is empty!" ;

cout << "Number of elements in array:" << arr.size() << endl;

auto begin = arr.begin(); // Interator pointing to the first element
auto end = arr.end();     // Interator pointing to the last element

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Vector
// Include using: #include <vector>
// Syntax: std::vector<object_type> vector_name;


std::vector<int> v {1, 2, 3, 4};

std::vector<string> v(4 , "NULL");  // Vector with 4 elements all containing the string "NULL"

// Adding elements 
v.push_back(10);          // Add element at end
v.insert(v.begin(),10)    // Insert element at start + <shift=0>

// Removing elements
v.pop_back();             // Remove element form end
v.erase(v.begin());   	  // Remove element at start + <shift=0>

// Accessing elements
cout << v.at(2) << endl;    //Checks bounds before accessing element

cout << v.front() << endl;
cout << v.back() << endl;

// Modifying elements
v.at(2) = 10;

// Other useful functions
v.clear()

v.resize(10, 0);

if(v.empty()) cout << "Vector is empty!" ;

cout << "Number of elements present in vector:" << v.size() << endl;
cout << "Current capacity of vector:" << v.capacity() << endl;

auto begin = v.begin(); // Interator pointing to the first element
auto end = v.end();     // Interator pointing to the last element

///////////////////////////////////////////////////////////////////////////////////////////////////////

// List
// Varients: 1) list         => Doubly Linked List (DLL)
//           2) forward_list => Singly Linked List (SLL)  
// Include using: #include <list>
// Syntax: std::list<object_type> list_name;

std::list<int> l {1,2,3};

// Adding elements 
l.push_back(10);           // Add element at end
l.push_front(10);          // Add element at start
l.insert(l.begin(), 10)    // Insert element at start + <shift=0>

// Removing elements
l.pop_back();             // Remove element at end
l.pop_front();            // Remove element at start

// Other useful functions
l.sort();

l.reverse();  

// l.splice(l.begin()+<shift>, <someOtherList>);

// l.merge(<someOtherList>);  // Sort both lists before merging 

if(l.empty()) cout << "List is empty!" ;

cout << "Number of elements present in list:" << l.size() << endl;
///////////////////////////////////////////////////////////////////////////////////////////////////////

// Stack
// Include using: #include <stack>
// Syntax: std::stack<object_type> stack_name;

std::stack<int> s;  
    
s.push(2);   // Add element on top of stack
s.pop();     // Remove element from top
s.top();	 // Accesing element at top

if(s.empty()) cout << "Stack is empty!" ;

cout << "Number of elements present in stack:" << s.size() << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Queue
// Varients: 1) queue
//           2) deque  
// Include using: #include <queue>
// Syntax: std::que<object_type> que_name;


std::queue <int> q;   
    
q.push(2);   // Enqueue element
q.pop();     // Dequeue element 

if(q.empty()) cout << "Queue is empty!" ;

cout << "Number of elements present in queue:" << q.size() << endl;

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Map
// Varients: 1) map
//			 2) multimap
//			 3) unordered_map
//			 4) unordered_multimap  
// Include using: #include <map>
// Syntax: std::map<key_type , value_type> map_name;
 
    
std::map<int, std::string> m; 

m[1]  = "First";
m.at(10) = "Tenth";
m.insert( make_pair(3,6));  
m.erase(m.begin());

if(m.empty()) cout << "Map is empty!" ;

cout << "Number of elements present in map:" << m.size() << endl;

// Other useful functions
m.clear();

m.find(10);
///////////////////////////////////////////////////////////////////////////////////////////////////////

// Set
// Varients: 1) set
//			 2) multiset
//			 3) unordered_set
//			 4) unordered_multiset 
// Include using: #include <set>
// Syntax: std::list<object_type> list_name;

///////////////////////////////////////////////////////////////////////////////////////////////////////



