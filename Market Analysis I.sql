-- Write your PostgreSQL query statement below

SELECT buyer_id, join_date, SUM(order_in_2019) AS orders_in_2019 
FROM (SELECT Users.user_id AS buyer_id, Users.join_date, Orders.order_id, (CASE WHEN order_date >= DATE('2019-01-01') AND order_date <= DATE('2019-12-31') THEN 1 ELSE 0 END ) AS order_in_2019 
FROM Users
FULL JOIN Orders ON Users.user_id = Orders.buyer_id)
GROUP BY buyer_id, join_date
ORDER BY buyer_id