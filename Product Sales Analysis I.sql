# Write your MySQL query statement below
WITH DATA AS (
    SELECT product_id, quantity, price, sale_id, year
    FROM Sales
    GROUP BY sale_id, year
)

SELECT Product.product_name, DATA.year, DATA.price
FROM DATA JOIN Product ON DATA.product_id = Product.product_id