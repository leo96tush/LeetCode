-- Write your PostgreSQL query statement below
SELECT actor_id, director_id
FROM (SELECT actor_id, director_id, COUNT(*) AS actor_director
FROM ActorDirector
GROUP BY actor_id, director_id)
WHERE actor_director > 2