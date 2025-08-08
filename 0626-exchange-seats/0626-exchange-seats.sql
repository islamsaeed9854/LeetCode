# Write your MySQL query statement below
/* Write your T-SQL query statement below */






select s.id ,  (case when  s.id%2 = 0 then (select s1.student from Seat s1 where s1.id = s.id-1) 
              when  (select count(s.id)
from Seat s) != s.id and s.id%2 != 0   then (select s1.student from Seat s1 where s1.id = s.id+1) 
              else s.student end ) as student 
from Seat s