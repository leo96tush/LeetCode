# Write your MySQL query statement below

WITH DATA AS (SELECT teacher_id, subject_id
FROM Teacher
GROUP BY teacher_id, subject_id)

SELECT teacher_id, COUNT(teacher_id) AS cnt
FROM DATA
GROUP BY teacher_id
