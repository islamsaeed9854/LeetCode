
with running_sum as(
select *, sum(weight) over ( order by turn ) AS cumulative_sum
from queue)
select person_name 
from running_sum
where cumulative_sum <= 1000
order by turn   desc
limit 1