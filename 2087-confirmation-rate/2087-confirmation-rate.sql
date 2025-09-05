# Write your MySQL query statement below

select S.user_id ,  round(ifnull(sum( case when action='confirmed' then 1 else 0 end) / count(action),0),2) confirmation_rate
from Signups S left outer join Confirmations C
on S.user_id = C.user_id 
group by S.user_id