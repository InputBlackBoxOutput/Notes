-- Last timestamp = 2:17 --> 3:13
/*
SQLite ==> Structured Query Language (SQL) notes
Notes written by InputBlackBoxOutput

Disclaimer: These notes are only for reference while learning the SQL

/////////////////////////////////////////////////////////////////////////////////////////////////////
General information

# Schematic view of a SQL database
					   ______________________
 ________             | Relational DBMS      |
|        | ---------> |     _____________    |
| System |    SQL     |    |             |   |
|________| <--------- |    |   Database  |   |
					  |    |_____________|   |       
					  |______________________|           

# Database: Collection of related information/data. 

# Database Management Sysytem (DBMS): A DBMS performs the following operations on a database:
 * Create    
 * Update
 * Retrive
 * Delete
 
The above operations can be remembered using the meumonic: C.R.U.D.

# SQL: A standardized language to interact with relational DBMS in order to perform CRUD operations 
       on the database

Note: SQL is not fully standardized hence there are slight variations in different flavours of SQL

*/
/*///////////////////////////////////////////////////////////////////////////////*/
-- Comments
-- This is a single line comment

/*  This is a multi- 
    line comment     */

/*///////////////////////////////////////////////////////////////////////////////*/
-- CRUD ==> CREATE

-- Creating a database
sqlite3 <database_name>.db

-- Creating a table  
CREATE TABLE friends (
	id INT PRIMARY KEY ,
	fst_name VARCHAR(15) ,
	lst_name VARCHAR(15) 
);

/*
Column nodifiers:

PRIMARY KEY
AUTOINCREMENT
NOT NULL
DEFAULT <value>
*/

-- Adding data to a table 
INSERT INTO friends VALUES(1, 'Rutuparn', 'Pawar');
INSERT INTO friends VALUES(2, 'Ayush', 'Garg');
INSERT INTO friends(id, fst_name) VALUES(3, 'Omkar');
INSERT INTO friends VALUES(4, 'Saurav', 'Doshi');
INSERT INTO friends VALUES(5, 'Mansi', 'Agarwal');


/*///////////////////////////////////////////////////////////////////////////////*/
-- CRUD ==> RETRIEVE

-- Retriving all columns
SELECT * FROM friends

-- Retriving a specific column
SELECT fst_name FROM friends;

/*///////////////////////////////////////////////////////////////////////////////*/
-- CRUD ==> UPDATE

-- Changing existing value in a table
UPDATE friends SET fst_name = 'Manas' WHERE fst_name = 'Rutuparn' AND id = 1

/*///////////////////////////////////////////////////////////////////////////////*/
-- CRUD ==> DELETE

-- Removing a table
DROP TABLE friends;

/*///////////////////////////////////////////////////////////////////////////////*/

