# Write your MySQL query statement below

WITH DATA AS (
    SELECT Person.email AS Email, count(Person.email) AS email_count 
    FROM Person
    GROUP BY Person.email
)

SELECT DATA.Email as Email
FROM DATA
WHERE DATA.email_count > 1 ;



-- Write your PostgreSQL query statement below
SELECT email FROM (
    SELECT email, COUNT(email) AS email_count
    FROM Person
    GROUP BY email
)
WHERE email_count > 1