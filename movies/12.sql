SELECT movies.title
FROM movies,stars,people
WHERE movies.id IN
SELECT 



(SELECT movie_id FROM stars WHERE person_id IN ())









'''
SELECT movies.title
FROM movies,stars,people
WHERE movies.id IN
(SELECT movie_id FROM stars WHERE movie_id IN
((SELECT stars.movie_id WHERE stars.person_id IN (SELECT id FROM people WHERE name = "Helena Bonham Carter"))
AND (SELECT stars.movie_id WHERE stars.person_id IN (SELECT id FROM people WHERE name = "Johnny Depp"))));
'''