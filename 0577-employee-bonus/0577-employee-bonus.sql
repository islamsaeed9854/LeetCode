/* Write your T-SQL query statement below */


select name , bonus 
from Employee E left outer join bonus  B
on E.empid = B.empid
where bonus < 1000 or bonus is null