SELECT
    user_id,
    name,
    mail
FROM Users
WHERE RIGHT(mail, 13) COLLATE Latin1_General_CS_AS = '@leetcode.com'
    AND mail LIKE '[a-zA-Z]%'
    AND LEFT(mail, LEN(mail)-13) NOT LIKE '%[^0-9a-zA-Z_\.\-]%'