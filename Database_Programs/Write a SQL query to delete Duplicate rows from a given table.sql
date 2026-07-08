DELETE FROM Employee
WHERE rowid NOT IN (
    SELECT MIN(rowid)
    FROM Employee
    GROUP BY Emp_ID, Name, Salary
);
