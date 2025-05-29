-- Create depositor table
CREATE TABLE depositor (
  customer_name VARCHAR2(50),
  account_number NUMBER
);

-- Insert sample data into depositor
INSERT INTO depositor VALUES ('Alice', 101);
INSERT INTO depositor VALUES ('Bob', 102);
INSERT INTO depositor VALUES ('Carol', 103);

-- Create borrower table
CREATE TABLE borrower (
  customer_name VARCHAR2(50),
  loan_number NUMBER
);

-- Insert sample data into borrower
INSERT INTO borrower VALUES ('Bob', 201);
INSERT INTO borrower VALUES ('David', 202);

-- Commit the changes
COMMIT;

-- Main query: find depositors who are not borrowers
SELECT DISTINCT customer_name
FROM depositor d
WHERE NOT EXISTS (
  SELECT *
  FROM borrower b
  WHERE b.customer_name = d.customer_name
);