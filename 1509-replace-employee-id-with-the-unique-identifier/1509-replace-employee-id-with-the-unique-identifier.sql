select unique_id  ,E.name
from Employees E left outer join EmployeeUNI U 
on E.id = U.id 