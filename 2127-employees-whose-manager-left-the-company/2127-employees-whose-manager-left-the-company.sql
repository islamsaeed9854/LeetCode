/* Write your T-SQL query statement below */

select E.employee_id 
from Employees E left outer join Employees M on E.manager_id = M.employee_id
where E.salary < 30000 and M.employee_id is null and E.manager_id is not null
order by employee_id








