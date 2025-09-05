
SELECT St.student_id , student_name  , Sb.subject_name ,count(E.subject_name) attended_exams
from Students St cross join Subjects Sb
left outer join  Examinations E on St.student_id = E.student_id 
and Sb.subject_name = E.subject_name  
group by St.student_id , student_name  , Sb.subject_name 
order by St.student_id , Sb.subject_name
