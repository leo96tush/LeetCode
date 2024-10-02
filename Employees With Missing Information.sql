--- Approach 1

SELECT Employees.employee_id
FROM Employees
LEFT JOIN Salaries ON Employees.employee_id = Salaries.employee_id
WHERE Salaries.salary IS NULL
UNION
SELECT Salaries.employee_id
FROM Salaries
LEFT JOIN Employees ON Salaries.employee_id = Employees.employee_id
WHERE Employees.name IS NULL
ORDER BY employee_id


--- Approach 2

SELECT employee_id
FROM (SELECT employee_id
FROM Employees
LEFT JOIN Salaries ON Employees.employee_id = Salaries.employee_id
WHERE Salaries.salary IS NULL
UNION
SELECT Salaries.employee_id
FROM Salaries


--- Approach 3

SELECT employee_id
FROM Employees 
WHERE name IS NULL OR 
employee_id NOT IN (
    SELECT employee_id
    FROM Salaries 
)

UNION

SELECT employee_id 
FROM Salaries
WHERE salary IS NULL OR 
employee_id NOT IN (
    SELECT employee_id
    FROM Employees
)

ORDER BY employee_id
