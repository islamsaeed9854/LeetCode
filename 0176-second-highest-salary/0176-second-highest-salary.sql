/* Write your T-SQL query statement below */

with CTE as 
(
    select id , salary , dense_rank() over (order by salary desc) as RN
    from Employee 
)
select iif(count(*)=0,null,max(salary )) SecondHighestSalary 
from CTE
where RN = 2