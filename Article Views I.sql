-- Write your PostgreSQL query statement below
SELECT DISTINCT(author_id) AS id
FROM (SELECT author_id
FROM Views
WHERE author_id = viewer_id
GROUP BY author_id, viewer_id)