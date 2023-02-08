// A JOIN clause is used to combine rows from two or more tables, based on a related column between them.

/*  SELECT
    Table1.column1,Table2.column1
    FROM Table1
    JOIN Table2 
    ON 
    Table1.PrimaryKey = Table2.PrimaryKey; 
*/

//  INNER JOIN - Returns records that have only matching values in both tables.
/* 
    SELECT 
    Orders.OrderID, Customers.CustomerName, Orders.OrderDate
    FROM Orders
    INNER JOIN Customers ON Orders.CustomerID=Customers.CustomerID;
 */


//  LEFT JOIN - Returns all records from the left table, and the matched records from the right table.
/* 
    SELECT Customers.CustomerName, Orders.OrderID
    FROM Customers
    LEFT JOIN Orders ON Customers.CustomerID = Orders.CustomerID
    ORDER BY Customers.CustomerName;
*/

//  RIGHT JOIN - Returns all records from the right table, and the matched records from the left table
/*
    SELECT Orders.OrderID, Employees.LastName, Employees.FirstName
    FROM Orders
    RIGHT JOIN Employees ON Orders.EmployeeID = Employees.EmployeeID
    ORDER BY Orders.OrderID;
    
 */

//  Returns all records when there is a match in either left or right table
/* 
    SELECT Customers.CustomerName, Orders.OrderID
    FROM Customers
    FULL OUTER JOIN Orders ON Customers.CustomerID=Orders.CustomerID
    ORDER BY Customers.CustomerName; 
*/

// NORMALIZATION

/* 
    Normalization is the process of organizing the data in the database.
    Normalization is used to minimize the redundancy from a relation or set of relations. 
    It is also used to eliminate undesirable characteristics like Insertion, Update, and Deletion Anomalies.
    Normalization divides the larger table into smaller and links them using relationships.
    The normal form is used to reduce redundancy from the database table.

    Types -

    1NF - Eliminate Repeating Groups.
    2NF - Eliminate Partial Functional Dependency.
    3NF - Eliminate Transitive Dependency.
    BCNF - Boyce Codd's normal form.

 */
