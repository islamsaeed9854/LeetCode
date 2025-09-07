/* Write your T-SQL query statement below */


with CTE as
(
    select num 
    from MyNumbers
    group by num
    having count(*)=1
)
select iif(count(*)=0,Null,max(num)) as num
from CTE

