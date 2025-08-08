SELECT 
    s.id,
    CASE 
        WHEN s.id % 2 = 0 THEN prev.student
        WHEN s.id % 2 = 1 AND s.id < (SELECT MAX(id) FROM Seat) THEN next.student
        ELSE s.student
    END AS student
FROM Seat s
LEFT JOIN Seat prev ON s.id = prev.id + 1
LEFT JOIN Seat next ON s.id = next.id - 1
ORDER BY s.id;