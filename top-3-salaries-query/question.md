# SQL Query to Find the Top 3 Salaries

### Problem Description:
You are given an `Employees` table containing the following fields:

| Column   | Type    |
|----------|---------|
| ID       | INT     |
| Name     | VARCHAR |
| Salary   | DECIMAL |

Write an SQL query to find the top 3 highest salaries in the `Employees` table.

### Sample Data:
| ID  | Name     | Salary |
|-----|----------|--------|
| 1   | Alice    | 6000   |
| 2   | Bob      | 7000   |
| 3   | Charlie  | 8000   |
| 4   | David    | 9000   |
| 5   | Edward   | 8500   |

### Expected Output:
The query should return the top 3 salaries from the `Employees` table in descending order.

| Salary |
|--------|
| 9000   |
| 8500   |
| 8000   |

