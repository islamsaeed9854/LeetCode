select name , bonus 
from Employee E left outer join Bonus B
on E.empId  = B.empId 
where bonus < 1000 or bonus is null