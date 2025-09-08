/* Write your T-SQL query statement below */

with CTE as
(
    select * , row_number() over(partition by employee_id order by primary_flag desc) as RN
    from Employee 
)
select employee_id , department_id
from CTE
where RN = 1
