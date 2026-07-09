CREATE TABLE test(
  id INT,
  number INT);
  
INSERT INTO test VALUES
  (1,100),
  (2,100),
  (3,100),
  (4,200),
  (5,200);
  
DELETE
FROM test
WHERE id NOT IN(
  SELECT MAX(id)
  FROM test
  GROUP BY number
  );
  
SELECT *
from test
