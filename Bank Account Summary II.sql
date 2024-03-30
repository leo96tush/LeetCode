# Write your MySQL query statement below
WITH DATA AS (
    SELECT account, SUM(amount) AS balance
    FROM Transactions
    GROUP BY account
)

SELECT Users.name, DATA.balance
FROM DATA
JOIN Users ON DATA.account = Users.account
WHERE DATA.balance > 10000