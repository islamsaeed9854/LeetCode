# Write your MySQL query statement below


select M.name
from Employee E
join Employee M
on M.id = E.managerID
group by M.name,M.id
having count(*) >= 5