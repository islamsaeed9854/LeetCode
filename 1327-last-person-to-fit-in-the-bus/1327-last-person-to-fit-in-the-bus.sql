# Write your MySQL query statement below
 
select q.person_name
from Queue q
    where (1000 >= (select sum(weight)
    from Queue
    where turn <= q.turn
    order by turn ))
order by turn desc
limit 1

