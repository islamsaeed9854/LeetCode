/* Write your T-SQL query statement below */


select M.name
from Employee M join Employee E
on M.id = E.managerId
group by m.id  , m.name
having count(*) >= 5