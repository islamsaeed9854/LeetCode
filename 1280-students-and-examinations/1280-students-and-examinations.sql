/* Write your T-SQL query statement below */


select st.student_id , st.student_name  , Sb.subject_name , count(e.subject_name) as  attended_exams 
from Students St cross join Subjects Sb 
left outer join Examinations E 
on St.student_id = E.student_id and Sb.subject_name  = e.subject_name
group by st.student_id , st.student_name  , Sb.subject_name