/* Write your T-SQL query statement below */


select M.employee_id  , M.name ,count(*) reports_count , ROUND(avg(1.0*E.age),0)average_age 
from Employees E join Employees M
on E.reports_to = M.employee_id
group by M.employee_id   , M.name 
order by M.employee_id