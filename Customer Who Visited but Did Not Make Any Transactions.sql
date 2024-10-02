-- Write your PostgreSQL query statement below
SELECT customer_id, COUNT(visits_visit_id) AS count_no_trans 
FROM (SELECT *, Visits.visit_id AS visits_visit_id
FROM Visits
FULL JOIN Transactions ON Visits.visit_id = Transactions.visit_id)
WHERE transaction_id IS NULL
GROUP BY customer_id