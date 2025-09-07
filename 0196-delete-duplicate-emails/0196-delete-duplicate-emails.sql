/* Write your T-SQL query statement below */


WITH CTE AS (
    SELECT id,email,ROW_NUMBER() OVER(PARTITION BY email ORDER BY id) AS rn
    FROM Person
)
DELETE P1 FROM Person P1 join CTE C
on  P1.id = C.id
WHERE rn > 1;