
select P.project_id , round(avg(experience_years),2) average_years
from Project P left outer join Employee E
on P.employee_id = E.employee_id 
group by P.project_id  