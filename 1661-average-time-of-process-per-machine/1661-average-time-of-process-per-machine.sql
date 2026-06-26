/* Write your T-SQL query statement below */

select a1.machine_id ,ROUND(avg(a2.timestamp  - a1.timestamp),3)  as processing_time 
from Activity A1 join Activity A2
on  A1.machine_id = A2.machine_id
and  A1.process_id  = A2.process_id 
and a1.activity_type = 'start' and a2.activity_type = 'end'
group by a1.machine_id