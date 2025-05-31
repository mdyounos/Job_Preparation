# Oracle SQL: Employee Department Trigger Example

This repository contains an example of using Oracle SQL to manage employees and departments with a **trigger** that updates employee salaries when a department field is modified.

## 📄 Exam Context

- **Organization:** Power Grid Company of Bangladesh (PGCB)
- **Position:** Assistant Engineer (Computer)
- **Exam Conducted By:** BUET (Bangladesh University of Engineering and Technology)
- **Exam Date:** 30-09-2021

This SQL task is based on a question or concept from the above-mentioned competitive exam.

## 📂 Files

- `employee_department_trigger.sql` – SQL script to:
  - Create `Employee` and `Department` tables
  - Insert sample data
  - Define a trigger that increases salaries
  - Demonstrate the trigger's effect

## 🧠 Trigger Logic

The trigger (`t`) is defined as:

```sql
CREATE OR REPLACE TRIGGER t
AFTER UPDATE OF id_change ON Department
FOR EACH ROW
BEGIN
    UPDATE Employee
    SET salary = salary * 1.1
    WHERE dept_id = :OLD.dept_id;
END;
