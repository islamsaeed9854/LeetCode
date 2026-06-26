/* Write your T-SQL query statement below */

select s.user_id ,
 round(sum( case when action = 'confirmed' then 1.0 else 0.0 end ) / count(s.user_id) ,2)
 as confirmation_rate 
from Signups S left outer join Confirmations C
on s.user_id = c.user_id 
group by s.user_id