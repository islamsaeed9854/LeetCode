/* Write your T-SQL query statement below */


select unique_id , name
from Employees  E left outer join EmployeeUNI U
on E.id = U.id