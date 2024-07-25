rdms matlab relational matlab 2 tables can have one common column
my sql is an rdbms
no sql is not rdbms
in sql there is no case sensitive

SELECT - extracts data from a database
UPDATE - updates data in a database
DELETE - deletes data from a database
INSERT INTO - inserts new data into a database
CREATE DATABASE - creates a new database
ALTER DATABASE - modifies a database
CREATE TABLE - creates a new table
ALTER TABLE - modifies a table
DROP TABLE - deletes a table
CREATE INDEX - creates an index (search key)
DROP INDEX - deletes an index



//! SELECT
SELECT column1, column2, ...
FROM table_name;

SELECT * FROM table_name; //this means select all columns



//SELECT DISTINCT Syntax
SELECT DISTINCT column1, column2, ...
FROM table_name;

//No of distinct elements in a column
SELECT COUNT(DISTINCT col) FROM table;


//! WHERE (just like if statements)
WHERE Clause Example
The following SQL statement selects all the customers from "Mexico":

Example
SELECT * FROM Customers
WHERE Country = 'Mexico'; //within quotations (//!IMP : string ko sql me ' ' se denote karte he)

SELECT * FROM Customers
WHERE CustomerID = 1;    //without quotations(//!IMP : integers ko sql me bas ese hi as integer likte he)

//! AND OR NOT
AND Syntax
SELECT column1, column2, ...
FROM table_name
WHERE condition1 AND condition2 AND condition3 ...;

OR Syntax
SELECT column1, column2, ...
FROM table_name
WHERE condition1 OR condition2 OR condition3 ...;

NOT Syntax
SELECT column1, column2, ...
FROM table_name
WHERE NOT condition;



//! SORTING
SELECT column1, column2, ...   
FROM table_name
ORDER BY column1, column2, ... ASC|DESC; //by default orderby will sort it in asc also if col1 has same element then we will se column 2 afterwards


//! INSERT INTO
//used to add a new row also u dont add the customerid here as it increases automatically on adding a new row
INSERT INTO Customers (CustomerName, City, Country)
VALUES ('Cardinal', 'Stavanger', 'Norway');






