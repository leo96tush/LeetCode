# Write your MySQL query statement below


WITH DATA AS (SELECT id, recordDate, temperature, row_number() OVER(ORDER BY recordDate ASC) AS row_num
FROM Weather)


SELECT A.id
FROM DATA A, DATA B
WHERE A.row_num = B.row_num + 1
AND A.temperature > B.temperature
AND DATE(DATE_ADD(A.recordDate, INTERVAL '-1' DAY)) = DATE(B.recordDate) 
