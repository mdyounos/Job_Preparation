CREATE TABLE Employee(
  Emp_Name TEXT,
  Salary INT);
  
INSERT INTO Employee VALUES
  ('Alice',5000),
  ('Bob',7000),
  ('Charlie',6000),
  ('David',4000);

SELECT Emp_Name
FROM Employee
WHERE Salary>(
  SELECT AVG(Salary)
  FROM Employee);
