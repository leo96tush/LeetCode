WITH DATA AS (
    
    SELECT class, COUNT(class) AS count_class
    FROM Courses
    GROUP BY class
    ORDER BY count_class DESC

)

SELECT class
FROM DATA
WHERE count_class >= 5
