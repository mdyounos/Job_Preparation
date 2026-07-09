CREATE TABLE Player(
  Name TEXT,
  Home TEXT,
  Run INT);
  
INSERT INTO Player VALUES
  ('Tamim','Chittagong',50),	
  ('Tamim','Chittagong',80),	
  ('Tamim','Chittagong',30),
  ('Mushfiq','Bogura',70),	
  ('Mushfiq','Bogura',40),	
  ('Shakib','Magura',90),	
  ('Shakib','Magura',60),	
  ('Riyad','Chittagong',20),	
  ('Riyad','Chittagong',40),	
  ('Riyad','Chittagong',60);

SELECT AVG(Run) as Average_Run
FROM Player
WHERE Home='Chittagong'
GROUP BY Name 
ORDER BY Average_Run DESC
