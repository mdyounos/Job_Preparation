-- ===========================================
-- Create Employee and Department Tables
-- ===========================================

-- Create Employee table
CREATE TABLE Employee(
    emp_id INT,                          -- Employee ID
    emp_name VARCHAR(50),               -- Employee name
    dept_id INT,                        -- Department ID (foreign key reference)
    salary INT                          -- Employee salary
);

-- Create Department table
CREATE TABLE Department(
    dept_id INT PRIMARY KEY,            -- Department ID (Primary Key)
    dept_name VARCHAR2(50),             -- Department name
    id_change INT                       -- Dummy field used to trigger salary update
);

-- ===========================================
-- Insert Sample Data
-- ===========================================

-- Insert sample employees
INSERT INTO Employee (emp_id, emp_name, dept_id, salary) VALUES (1, 'Alice Johnson', 10, 60000);
INSERT INTO Employee (emp_id, emp_name, dept_id, salary) VALUES (2, 'Bob Smith', 20, 75000);
INSERT INTO Employee (emp_id, emp_name, dept_id, salary) VALUES (3, 'Charlie Lee', 30, 90000);
INSERT INTO Employee (emp_id, emp_name, dept_id, salary) VALUES (4, 'Dana White', 30, 95000);
INSERT INTO Employee (emp_id, emp_name, dept_id, salary) VALUES (5, 'Eve Davis', 40, 70000);

-- Insert sample departments
INSERT INTO Department (dept_id, dept_name, id_change) VALUES (10, 'Human Resources', 101);
INSERT INTO Department (dept_id, dept_name, id_change) VALUES (20, 'Finance', 102);
INSERT INTO Department (dept_id, dept_name, id_change) VALUES (30, 'Engineering', 103);
INSERT INTO Department (dept_id, dept_name, id_change) VALUES (40, 'Marketing', 104);

-- ===========================================
-- Create Trigger
-- ===========================================

-- Trigger: After updating the id_change column in Department,
-- increase the salary of all employees in that department by 10%
CREATE OR REPLACE TRIGGER t
AFTER UPDATE OF id_change ON Department
FOR EACH ROW
BEGIN
    UPDATE Employee
    SET salary = salary * 1.1
    WHERE dept_id = :OLD.dept_id;
END;
/

-- ===========================================
-- Test the Trigger
-- ===========================================

-- Check employee salaries before the update
SELECT * 
FROM Employee 
WHERE dept_id = 30;

-- Update id_change to trigger salary increase for department 30
UPDATE Department
SET id_change = id_change + 1
WHERE dept_id = 30;

-- Check salaries after trigger fired
SELECT * 
FROM Employee 
WHERE dept_id = 30;
