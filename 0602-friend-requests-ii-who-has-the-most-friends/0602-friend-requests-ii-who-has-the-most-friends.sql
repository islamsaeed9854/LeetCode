# Write your MySQL query statement below


with CTE as (
    select requester_id as id
    from RequestAccepted
    union all
    select accepter_id 
    from RequestAccepted
)
select id , count(id) num
from CTE
group by id
order by num desc
limit 1