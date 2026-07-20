/*
AP, ISTCL-2026

**Problem Statement**

Design, populate, and manipulate a relational database system for an educational institution.

### Task 1: Design the Database

Create the following tables:

1. **Department**

   * `deptid` (Primary Key)
   * `deptname`

2. **Student**

   * `stuid` (Primary Key)
   * `name`
   * `gpa`
   * `deptid` (Foreign Key referencing `Department.deptid`)

### Task 2: Populate the Database

* Insert **3 unique department** records into the **Department** table.
* Insert **5 unique student** records into the **Student** table.
* Ensure that the student records include **different GPA values**.

### Task 3: Perform Database Operations

Write SQL queries to accomplish the following:

1. Retrieve the **student name** and their **department name** for all students with a **GPA of 3.5 or higher**.
2. Update the **GPA of a specific student** using their **Student ID (`stuid`)**.
3. Delete a **specific student record** from the **Student** table using their **Student ID (`stuid`)**.
*/

-- ==========================================
-- Student and Department Database
-- ==========================================

-- Task 1: Create Tables

CREATE TABLE Department (
    deptid INT PRIMARY KEY,
    deptname VARCHAR(50) NOT NULL
);

CREATE TABLE Student (
    stuid INT PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    gpa DECIMAL(3,2),
    deptid INT,
    FOREIGN KEY (deptid) REFERENCES Department(deptid)
);

-- ==========================================
-- Task 2: Insert Data
-- ==========================================

-- Insert 3 departments
INSERT INTO Department (deptid, deptname)
VALUES
(1, 'Computer Science'),
(2, 'Electrical Engineering'),
(3, 'Business Administration');

-- Insert 5 students
INSERT INTO Student (stuid, name, gpa, deptid)
VALUES
(101, 'Alice', 3.90, 1),
(102, 'Bob', 3.20, 2),
(103, 'Charlie', 3.70, 1),
(104, 'David', 2.95, 3),
(105, 'Emma', 3.50, 2);

-- ==========================================
-- Task 3(a): Retrieve student name and
-- department name for students with GPA >= 3.5
-- ==========================================

SELECT
    s.name AS Student_Name,
    d.deptname AS Department_Name
FROM Student s
JOIN Department d
ON s.deptid = d.deptid
WHERE s.gpa >= 3.50;

-- ==========================================
-- Task 3(b): Update the GPA of a student
-- Example: Update student ID 102 to GPA 3.60
-- ==========================================

UPDATE Student
SET gpa = 3.60
WHERE stuid = 102;

-- ==========================================
-- Task 3(c): Delete a student by ID
-- Example: Delete student ID 104
-- ==========================================

DELETE FROM Student
WHERE stuid = 104;

/*
| Student_Name | Department_Name        |
| ------------ | ---------------------- |
| Alice        | Computer Science       |
| Charlie      | Computer Science       |
| Emma         | Electrical Engineering |
*/
