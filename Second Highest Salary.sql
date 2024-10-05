-- Write your PostgreSQL query statement below
SELECT (CASE WHEN COUNT(DISTINCT(salary)) <= 1 THEN null ELSE 
(SELECT salary AS SecondHighestSalary 
FROM (SELECT DISTINCT(salary) FROM Employee)
ORDER BY salary DESC
OFFSET 1
LIMIT 1)
END)
FROM Employee