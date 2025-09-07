WITH CTE AS (
    SELECT 
        id,
        email,
        -- Assign a row number to each email group, ordered by id
        ROW_NUMBER() OVER(PARTITION BY email ORDER BY id) AS rn
    FROM 
        Person
)
DELETE P1 FROM Person P1 join CTE C
on  P1.id = C.id
WHERE rn > 1;